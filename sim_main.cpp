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

            }
        }
        for(int j = 0; j < num_outputs; j++){
            for(int i = 0; i < num_inputs; i++) {
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
double** read_fc(string full_path, int& num_outputs,  int& num_inputs){

    ifstream file(full_path, ios::in);

    if(file.is_open()) {
        string tp;
        getline(file, tp);
        num_outputs = stoi(tp);

        getline(file, tp);
        num_inputs = stoi(tp);

        double** _data = new double*[num_outputs];
        for(int i=0;i<num_outputs;i++){
            _data[i] = new double[num_inputs];
            for(int j = 0; j < num_inputs; j++){
                getline(file, tp);
                _data[i][j] = stof(tp);
            }
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
    top->l3_write_weights = 0;
    top->l3_write_bias = 0;
    top->l5_write_weights = 0;
    top->l5_write_bias = 0;
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
    fname = "verilog_data/cnn1_weights.txt";
    int num_inputs;
    int num_outputs;
    int kernel_dim;
    double*** _weights  = read_txt(fname, num_inputs, num_outputs, kernel_dim);

    fname = "verilog_data/cnn1_bias.txt";
    int num_bias;
    double* _bias  = read_bias(fname, num_bias);

    fname = "verilog_data/cnn2_weights.txt";
    int num_inputs2;
    int num_outputs2;
    int kernel_dim2;
    double*** _weights2  = read_txt(fname, num_inputs2, num_outputs2, kernel_dim2);

    fname = "verilog_data/cnn2_bias.txt";
    int num_bias2;
    double* _bias2  = read_bias(fname, num_bias2);

    fname = "verilog_data/fc1_weights.txt";
    int num_inputs3;
    int num_outputs3;
    double** _weights3 = read_fc(fname, num_outputs3, num_inputs3);

    fname = "verilog_data/fc1_bias.txt";
    int num_bias3;
    double* _bias3  = read_bias(fname, num_bias3);



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
    std::printf("\n*****LOAD WEIGHTS INTO CONV2 LAYER*****\n");
    top->l3_write_weights = 1;
    for(int j = 0; j<num_inputs2; j++){
        for(int k = 0; k<num_outputs2; k++){
            for(int i = 0; i<kernel_dim2*kernel_dim2; i++){
                top->clk = 1;
                top->input_index[3] = j;
                top->input_index[2] = k;
                top->input_index[1] = i/kernel_dim2;
                top->input_index[0] = i%kernel_dim2;

                uint64 data_int;
                memcpy(&data_int, &(_weights2[j][k][i]), sizeof((_weights2[j][k][i])));
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
    reset(top);
    std::printf("\n*****LOAD BIAS INTO CONV2 LAYER*****\n");
    top->l3_write_bias = 1;
    for(int j = 0; j<num_bias2; j++){
        top->clk = 1;

        top->input_index[0] = j;

        uint64 data_int;
        memcpy(&data_int, &(_bias2[j]), sizeof(_bias2[j]));
        top->input_data = data_int;

        //cout <<endl<<"**********************CYCLE: "<< j << "**********************" <<endl;
        top->eval();

        top->clk = 0;
        top->eval();

    }

    reset(top);
    std::printf("\n*****LOAD WEIGHTS INTO FC LAYER*****\n");
    top->l5_write_weights = 1;
    for(int i = 0; i<num_outputs3; i++){
        for(int j = 0; j<num_inputs3; j++){
            top->clk = 1;

            top->input_index[1] = i;
            top->input_index[0] = j;

            uint64 data_int;
            memcpy(&data_int, &(_weights3[i][j]), sizeof((_weights3[i][j])));
            top->input_data = data_int;

            //cout <<endl<<"**********************CYCLE: "<< j*num_outputs+k*kernel_dim*kernel_dim+i << "**********************" <<endl;
            top->eval();

            top->clk = 0;
            top->eval();
            
        }
    }

    reset(top);
    std::printf("\n*****LOAD BIAS INTO FC1 LAYER*****\n");
    top->l5_write_bias = 1;
    for(int j = 0; j<num_bias3; j++){
        top->clk = 1;

        top->input_index[0] = j;

        uint64 data_int;
        memcpy(&data_int, &(_bias3[j]), sizeof(_bias3[j]));
        top->input_data = data_int;

        //cout <<endl<<"**********************CYCLE: "<< j << "**********************" <<endl;
        top->eval();

        top->clk = 0;
        top->eval();

    }

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
    // for(int i = 0; i<(2000000); i++){
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