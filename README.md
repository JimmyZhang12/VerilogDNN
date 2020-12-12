# VerilogDNN
A Verilog implementation of the forward path, of a MNIST dataset classifier

# Run Instructions
Run the run.sh script. This removes the old build, compiles verilog to cpp, compiles to cpp, and runs the executable.
Output is dumped to the out.txt text file

# Dependecies
This project was developed and tested on an Arch Linux distro
Dependencies:<br/>
  Verilator
  GCC
  Python 3.9
   PyTorch
   TorchVision
   NumPy
   
# Files
Verilog - The verilog modules implementing the classifier, top.v is the top level module<br/>
verilog_data - Per layer activation dumps, pretrained weights biases, normalized input set<br/>
obj_dir - Build folder for verilator, run.sh overwrites this folder<br/>
sim_main.cpp - Testbench<br/>



