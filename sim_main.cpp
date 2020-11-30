#include <stdlib.h>

#include "Vroot.h"
#include "verilated.h"

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vroot* top = new Vroot;

    while (!Verilated::gotFinish()) {
         top->eval(); 
    }

    delete top;
    exit(0);
}