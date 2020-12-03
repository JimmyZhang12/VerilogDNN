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

    typedef unsigned char uchar;

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
uint64 toBits(double data){
    uint64 data_int;
    memcpy(&data_int, &data, sizeof(data));
    return data_int;
}
int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    std::string fname = "t10k-images.idx3-ubyte";
    int num_images;
    int image_size;
    int image_dim;
    uchar** _dataset = read_mnist_images(fname,num_images, image_size, image_dim);
    
    bool clk = 0;

    top->clk = clk;
    top->eval();
    
    std::printf("\n*****LOAD IMAGE INTO INPUT LAYER*****\n");
    top->write = 1;
    for(int i = 0; i<image_size; i++){
        clk = 1;
        top->clk = clk;

        (top->input_index)[0] = 0;
        (top->input_index)[0] = (uint16) i/image_dim;
        (top->input_index)[0] = (uint16) i%image_dim;

        double data = (double) (_dataset[0][i]);
        uint64 data_int;
        memcpy(&data_int, &data, sizeof(data));
        top->input_data = data_int;

        cout <<endl<<"**********************CYCLE: "<< i << " CLK:" << clk <<"**********************" <<endl;
        top->eval();

        //negedge
        clk = 0;
        top->clk = clk;

        top->eval();
    }




    // top->data = 2;
    // top->clk = 0;
    // top->eval(); 
    // top->data = 2;
    // top->data = 6343;
    // top->clk = 0;
    // top->eval(); 
 

    //bool clk = 1;
    //while (!Verilated::gotFinish()) {
    // for(int i=0; i<2;i++){
    //     top->clk = clk;
    //     top->eval(); 
    //     clk = !clk;
    // }


    //}

    delete top;
    exit(0);
}