//
// Created by SnirN on 8/14/2024.
//

#ifndef DESIGNPATTERNS_COMPUTER_HPP
#define DESIGNPATTERNS_COMPUTER_HPP
#include <iostream>

class Computer {
    std::string cpu;
    std::string gpu;
    std::string ram;
    std::string storage;

public:
    void setCPU(const std::string &cpu) { this->cpu = cpu; }
    void setGPU(const std::string &gpu) { this->gpu = gpu; }
    void setRAM(const std::string &ram) { this->ram = ram; }
    void setStorage(const std::string &storage) { this->storage = storage; }

    void showSpecs() {
        std::cout << "CPU: " << cpu << "\nGPU: " << gpu << "\nRAM: " << ram << "\nStorage: " << storage << std::endl;
    }
};
#endif//DESIGNPATTERNS_COMPUTER_HPP
