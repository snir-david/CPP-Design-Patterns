//
// Created by SnirN on 8/14/2024.
//

#ifndef DESIGNPATTERNS_COMPUTERBUILDER_HPP
#define DESIGNPATTERNS_COMPUTERBUILDER_HPP
#include "Computer.hpp"

class ComputerBuilder {
protected:
    Computer* computer;
public:
    ComputerBuilder() { computer = new Computer(); }
    virtual ~ComputerBuilder() { delete computer; }

    Computer* getComputer() { return computer; }

    virtual void buildCPU() = 0;
    virtual void buildGPU() = 0;
    virtual void buildRAM() = 0;
    virtual void buildStorage() = 0;
};

class GamingComputerBuilder : public ComputerBuilder {
public:
    void buildCPU() override { computer->setCPU("Intel i9"); }
    void buildGPU() override { computer->setGPU("NVIDIA RTX 3080"); }
    void buildRAM() override { computer->setRAM("32GB"); }
    void buildStorage() override { computer->setStorage("1TB SSD"); }
};

class Director {
    ComputerBuilder* builder;
public:
    void setBuilder(ComputerBuilder* newBuilder) { builder = newBuilder; }

    Computer* buildComputer() {
        builder->buildCPU();
        builder->buildGPU();
        builder->buildRAM();
        builder->buildStorage();
        return builder->getComputer();
    }
};

// Usage
//Director director;
//GamingComputerBuilder gamingBuilder;
//
//director.setBuilder(&gamingBuilder);
//Computer* gamingComputer = director.buildComputer();
//gamingComputer->showSpecs();
#endif//DESIGNPATTERNS_COMPUTERBUILDER_HPP
