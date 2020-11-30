import torch
import torchvision
import torchvision.transforms as transforms
from torch import nn
import torch.nn.functional as F

import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import numpy as np

class Net(nn.Module):
    def __init__(self):
        super(Net, self).__init__()
        # Convolution 1
        self.cnn1 = nn.Conv2d(in_channels=1, out_channels=16, kernel_size=3, stride=1, padding=0)
        self.relu1 = nn.ReLU()
        # Max pool 1
        self.maxpool1 = nn.MaxPool2d(kernel_size=2)
        # Convolution 2
        self.cnn2 = nn.Conv2d(in_channels=16, out_channels=32, kernel_size=3, stride=1, padding=0)
        self.relu2 = nn.ReLU()
        # Max pool 2
        self.maxpool2 = nn.MaxPool2d(kernel_size=2)
        # Fully connected 1
        self.fc1 = nn.Linear(32 * 5 * 5, 10) 
    
    def forward(self, x):
        # Set 1
        out = self.cnn1(x)
        out = self.relu1(out)
        out = self.maxpool1(out)
        # Set 2
        out = self.cnn2(out)
        out = self.relu2(out)
        out = self.maxpool2(out)
        #Flatten
        out = out.view(out.size(0), -1)
        #Dense
        out = self.fc1(out)
        
        return out

def train(num_epoch, device, lr, batch_size, momentum):
    #quantization params
    log_interval = 15

    trainset = torchvision.datasets.MNIST('./data', train=True, download=True,
                             transform=torchvision.transforms.Compose([
                               torchvision.transforms.ToTensor(),
                               torchvision.transforms.Normalize(
                                 (0.1307,), (0.3081,))
                             ]))
    train_loader = torch.utils.data.DataLoader(trainset, batch_size=batch_size, shuffle=True)

    network = Net()
    network.train()
    #flat learning rate
    optimizer = torch.optim.SGD(network.parameters(), lr=0.01)

    network.to(device)
    criterion = torch.nn.CrossEntropyLoss()

    for e in range(num_epoch):
        for batch_idx, data in enumerate(train_loader):
            inputs, labels = data
            inputs, labels = inputs.to(device), labels.to(device)

            optimizer.zero_grad()
            output = network(inputs)

            loss = criterion(output, labels)
            loss.backward()
            optimizer.step()

            if batch_idx % log_interval == 0:
                print('Train Epoch: {} [{}/{} ({:.0f}%)]\tLoss: {:.6f}'.format(
                        e, batch_idx * len(data), len(train_loader.dataset),
                    100. * batch_idx / len(train_loader), loss.item()))

    torch.save(network.state_dict(), './model.pth')
    torch.save(optimizer.state_dict(), './optimizer.pth')

def eval(network):
    network.eval()
    torch.no_grad()

    batch_size_test = 1000

    testset = torchvision.datasets.MNIST(
                                        './data', train=False, download=True,
                                        transform=torchvision.transforms.Compose(
                                            [torchvision.transforms.ToTensor(),
                                            torchvision.transforms.Normalize((0.1307,), (0.3081,))
                                            ]
                                            )
                                        )
    test_loader = torch.utils.data.DataLoader(testset, batch_size=batch_size_test, shuffle=True)

    test_loss = 0
    correct = 0
    with torch.no_grad():
        for data, target in test_loader:
            output = network(data)
            test_loss += F.nll_loss(output, target, size_average=False).item()
            pred = output.data.max(1, keepdim=True)[1]
            correct += pred.eq(target.data.view_as(pred)).sum()
        test_loss /= len(test_loader.dataset)

        print('\nTest set: Avg. loss: {:.4f}, Accuracy: {}/{} ({:.0f}%)\n'.format(
            test_loss, correct, len(test_loader.dataset),
            100. * correct / len(test_loader.dataset)))
def model_as_txt(network):
    

if __name__ == '__main__':
    device = 'cuda' if torch.cuda.is_available() else 'cpu'

#    train(num_epoch=20, device=device, lr=0.01, batch_size=64, momentum=0.5)

    network = Net()
    network.load_state_dict(torch.load('./model.pth'))
    
    # print(network.layers[1].weight.shape)
    # print(network.layers[1].bias.shape)
    # print(network.layers[4].weight.shape)
    # print(network.layers[4].bias.shape)
    # print(network.layers[7].weight.shape)
    # print(network.layers[7].bias.shape)

    eval(network)
