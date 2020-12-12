# VerilogDNN
A Verilog implementation of the forward path, of a MNIST dataset classifier

# Run Instructions
Run the run.sh script. This removes the old build, compiles verilog to cpp, compiles to cpp, and runs the executable.
Output is dumped to the out.txt text file

Other branches have different optimizations, branch name is self explantory

# Dependecies
This project was developed and tested on an Arch Linux distro
Dependencies:<br/>
  Verilator<br/>
  GCC<br/>
  Python 3.9<br/>
   PyTorch<br/>
   TorchVision<br/>
   NumPy<br/>
   
# Files
Verilog - The verilog modules implementing the classifier, top.v is the top level module<br/>
verilog_data - Per layer activation dumps, pretrained weights biases, normalized input set<br/>
obj_dir - Build folder for verilator, run.sh overwrites this folder<br/>
sim_main.cpp - Testbench<br/>
Python - PyTorch model of the classifier



