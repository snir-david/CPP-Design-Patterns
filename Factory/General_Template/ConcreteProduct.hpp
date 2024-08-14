//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_CONCRETEPRODUCT_HPP
#define DESIGNPATTERNS_CONCRETEPRODUCT_HPP

#include "IProduct.hpp"
#include <iostream>
#include <memory>


// Concrete IProduct A
class ConcreteProductA : public IProduct {
public:
    void use() const override { std::cout << "Using ConcreteProductA" << std::endl; }
};

// Concrete IProduct B
class ConcreteProductB : public IProduct {
public:
    void use() const override { std::cout << "Using ConcreteProductB" << std::endl; };
};

#endif//DESIGNPATTERNS_CONCRETEPRODUCT_HPP