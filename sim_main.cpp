#include <stdlib.h>
#include <string>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Vtop.h"
#include "verilated.h"

typedef unsigned char uchar;
typedef unsigned long long int uint64;
typedef unsigned short int uint16;

using namespace std;

uchar** read_mnist_images(string full_path, int& number_of_images, int& image_size, int& image_dim) {
    auto reverseInt = [](int i) {
        unsigned char c1, c2, c3, c4;
        c1 = i & 255, c2 = (i >> 8) & 255, c3 = (i >> 16) & 255, c4 = (i >> 24) & 255;
        return ((int)c1 << 24) + ((int)c2 << 16) + ((int)c3 << 8) + c4;
    };

    ifstream file(full_path, ios::binary);

    if(file.is_open()) {
        int magic_number = 0, n_rows = 0, n_cols = 0;

        file.read((char *)&magic_number, sizeof(magic_number));
        magic_number = reverseInt(magic_number);

        if(magic_number != 2051) throw std::runtime_error("Invalid MNIST image file!");

        file.read((char *)&number_of_images, sizeof(number_of_images)), number_of_images = reverseInt(number_of_images);
        file.read((char *)&n_rows, sizeof(n_rows)), n_rows = reverseInt(n_rows);
        file.read((char *)&n_cols, sizeof(n_cols)), n_cols = reverseInt(n_cols);

        image_size = n_rows * n_cols;
        image_dim = n_rows;

        uchar** _dataset = new uchar*[number_of_images];
        for(int i = 0; i < number_of_images; i++) {
            _dataset[i] = new uchar[image_size];
            file.read((char *)_dataset[i], image_size);
        }
        return _dataset;
    } else {
        throw runtime_error("Cannot open file `" + full_path + "`!");
    }
}
double*** read_txt(string full_path, int& num_inputs, int& num_outputs, int& kernel_dim){

    ifstream file(full_path, ios::in);

    if(file.is_open()) {
        string tp;
        getline(file, tp);
        int n_i = stoi(tp);
        memcpy(&num_outputs, &n_i, sizeof(n_i));
        //num_inputs = stoi(tp);
        getline(file, tp);
        num_inputs = stoi(tp);
        getline(file, tp);
        kernel_dim = stoi(tp);

        getline(file, tp);
        double*** _weights = new double**[num_inputs];

        for(int i = 0; i < num_inputs; i++) {
            _weights[i] = new double*[num_outputs];
            for(int j = 0; j < num_outputs; j++){
                _weights[i][j] = new double[kernel_dim*kernel_dim];
                    for(int k = 0; k < kernel_dim*kernel_dim; k++){
                        getline(file, tp);
                        _weights[i][j][k] = stof(tp);
                    }
            }
        }

        file.close(); //close the file object.
        return _weights;
    } else {
        throw runtime_error("Cannot open file `" + full_path + "`!");
    }

}

double* read_bias(string full_path, int& num_outputs){

    ifstream file(full_path, ios::in);

    if(file.is_open()) {
        string tp;
        getline(file, tp);
        num_outputs = stoi(tp);

        double* _data = new double[num_outputs];

        for(int i=0;i<num_outputs;i++){
            getline(file, tp);
            _data[i] = stof(tp);
        }

        file.close(); //close the file object.
        return _data;
    } else {
        throw runtime_error("Cannot open file `" + full_path + "`!");
    }

}


uint64 toBits(double data){
    uint64 data_int;
    memcpy(&data_int, &data, sizeof(data));
    return data_int;
}
void reset(Vtop* top){
    top->input_write_act = 0;
    top->input_write_weights = 0;
    top->input_write_bias = 0;
    top->input_index[3] = 0;
    top->input_index[2] = 0;
    top->input_index[1] = 0;
    top->input_index[0] = 0;
    top->clk = 0;
    top->compute = 0;
    top->eval();
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    //load input
    // std::string fname = "t10k-images.idx3-ubyte";
    // int num_images;
    // int image_size;
    // int image_dim;
    //uchar** _dataset = read_mnist_images(fname,num_images, image_size, image_dim);

    string fname = "verilog_data/input.txt";
    int num_images_;
    int num_images;
    int image_dim;
    double*** _dataset  = read_txt(fname, num_images_, num_images, image_dim);


    //load weights
    fname = "verilog_data/cnn1.txt";
    int num_inputs;
    int num_outputs;
    int kernel_dim;
    double*** _weights  = read_txt(fname, num_inputs, num_outputs, kernel_dim);

    fname = "verilog_data/cnn1_bias.txt";
    int num_bias;
    double* _bias  = read_bias(fname, num_bias);



    std::printf("\n*****LOAD IMAGE INTO INPUT LAYER*****\n");
    reset(top);
    top->input_write_act = 1;
    for(int i = 0; i<image_dim*image_dim; i++){
        top->clk = 1;

        top->input_index[2] = 0;
        top->input_index[1] = i/image_dim;
        top->input_index[0] = i%image_dim;
        
        // double data = (double) (_dataset[0][i]);
        // uint64 data_int;
        // memcpy(&data_int, &data, sizeof(data));
        // top->input_data = data_int;

        uint64 data_int;
        memcpy(&data_int, &(_dataset[0][0][i]), sizeof((_dataset[0][0][i])));
        top->input_data = data_int;

        //cout <<endl<<"**********************CYCLE: "<< i <<"**********************" <<endl;
        top->eval();

        //negedge
        top->clk = 0;
        top->eval();
    }

    reset(top);
    std::printf("\n*****LOAD WEIGHTS INTO INPUT LAYER*****\n");
    top->input_write_weights = 1;
    for(int j = 0; j<num_inputs; j++){
        for(int k = 0; k<num_outputs; k++){
            for(int i = 0; i<kernel_dim*kernel_dim; i++){
                top->clk = 1;

                top->input_write_weights = 1;
                top->input_index[3] = j;
                top->input_index[2] = k;
                top->input_index[1] = i/kernel_dim;
                top->input_index[0] = i%kernel_dim;

                uint64 data_int;
                memcpy(&data_int, &(_weights[j][k][i]), sizeof((_weights[j][k][i])));
                top->input_data = data_int;

                //cout <<endl<<"**********************CYCLE: "<< j*num_outputs+k*kernel_dim*kernel_dim+i << "**********************" <<endl;
                top->eval();

                top->clk = 0;
                top->eval();
            }
        }
    }

    reset(top);
    std::printf("\n*****LOAD BIAS INTO INPUT LAYER*****\n");
    top->input_write_bias = 1;
    for(int j = 0; j<num_bias; j++){
        top->clk = 1;

        top->input_index[0] = j;

        uint64 data_int;
        memcpy(&data_int, &(_bias[j]), sizeof(_bias[j]));
        top->input_data = data_int;

        //cout <<endl<<"**********************CYCLE: "<< j << "**********************" <<endl;
        top->eval();

        top->clk = 0;
        top->eval();

    }
    top->input_write_weights = 0;



    reset(top);
    top->compute = 1;
    top->clk = 1;
    top->eval();
    top->clk = 0;
    top->eval();

    std::printf("\n*****COMPUTE*****\n");
    reset(top);
    int i = 0;
    while(!Verilated::gotFinish()) {
        top->clk = 1;
        top->eval();

        //cout <<endl<<"**********************CYCLE: "<< i << "**********************" <<endl;

        top->clk = 0;
        top->eval();
        i++;
	} exit(EXIT_SUCCESS);
    // for(int i = 0; i<(26*26*9*16*2 + 30000); i++){
    // //for(int i = 0; i<(26*9); i++){
    //     top->clk = 1;
    //     top->eval();

    //     //cout <<endl<<"**********************CYCLE: "<< i << "**********************" <<endl;

    //     top->clk = 0;
    //     top->eval();
    // }

    delete top;
    exit(0);
}