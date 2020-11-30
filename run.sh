#!/bin/bash

rm -rf obj_dir
verilator -Wall -cc --trace root.v --exe sim_main.cpp
make -j -C obj_dir/ -f Vroot.mk Vroot
./obj_dir/Vroot