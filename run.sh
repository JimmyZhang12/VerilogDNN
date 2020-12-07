#!/bin/bash

rm -rf obj_dir
verilator -Wall -cc --trace verilog/top.v --top-module top -I verilog/memory.v verilog/conv_layer.v verilog/* --exe sim_main.cpp
make -j -C obj_dir/ -f Vtop.mk Vtop
./obj_dir/Vtop > out.txt