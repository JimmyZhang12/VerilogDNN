import os
import torch
import torchvision
import torchvision.transforms as transforms
from torch import nn
import torch.nn.functional as F

import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import numpy as np


cwd = os.path.dirname(os.path.abspath(__file__))

file1 = open(cwd + "/act_test.txt","w") 
file1.write(str(2)+"\n")
file1.write(str(2)+"\n")
file1.write(str(3)+"\n")
file1.write(str(3)+"\n")

for x in range(5*5*2):
    #print(x)
    file1.write(str(x)+".0\n")
file1.close()