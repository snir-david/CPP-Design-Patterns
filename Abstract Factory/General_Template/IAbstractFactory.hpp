//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_IABSTRACTFACTORY_HPP
#define DESIGNPATTERNS_IABSTRACTFACTORY_HPP

#include "IAbstractProduct.hpp"

// Abstract Factory Interface
class AbstractFactory {
public:
    virtual ~AbstractFactory() {}
    virtual std::unique_ptr<AbstractProductA> createProductA() const = 0;
    virtual std::unique_ptr<AbstractProductB> createProductB() const = 0;
};

#endif//DESIGNPATTERNS_IABSTRACTFACTORY_HPP
