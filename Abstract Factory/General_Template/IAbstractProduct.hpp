//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_IABSTRACTPRODUCT_HPP
#define DESIGNPATTERNS_IABSTRACTPRODUCT_HPP
#include <iostream>
#include <memory>

// Abstract Product A
class AbstractProductA {
public:
    virtual ~AbstractProductA() {}
    virtual void operationA() const = 0;
};

// Abstract Product B
class AbstractProductB {
public:
    virtual ~AbstractProductB() {}
    virtual void operationB() const = 0;
};

#endif//DESIGNPATTERNS_IABSTRACTPRODUCT_HPP
