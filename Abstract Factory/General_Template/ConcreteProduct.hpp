//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_CONCRETEPRODUCT_HPP
#define DESIGNPATTERNS_CONCRETEPRODUCT_HPP
#include "IAbstractProduct.hpp"
#include <iostream>

// Concrete Product A1
class ConcreteProductA1 : public AbstractProductA {
public:
    void operationA() const override {
        std::cout << "Operation A1" << std::endl;
    }
};

// Concrete Product A2
class ConcreteProductA2 : public AbstractProductA {
public:
    void operationA() const override {
        std::cout << "Operation A2" << std::endl;
    }
};

// Concrete Product B1
class ConcreteProductB1 : public AbstractProductB {
public:
    void operationB() const override {
        std::cout << "Operation B1" << std::endl;
    }
};

// Concrete Product B2
class ConcreteProductB2 : public AbstractProductB {
public:
    void operationB() const override {
        std::cout << "Operation B2" << std::endl;
    }
};

#endif//DESIGNPATTERNS_CONCRETEPRODUCT_HPP
