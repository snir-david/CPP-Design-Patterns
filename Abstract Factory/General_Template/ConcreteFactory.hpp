//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_CONCRETEFACTORY_HPP
#define DESIGNPATTERNS_CONCRETEFACTORY_HPP
#include "IAbstractFactory.hpp"
#include "ConcreteProduct.hpp"

// Concrete Factory 1
class ConcreteFactory1 : public AbstractFactory {
public:
    std::unique_ptr<AbstractProductA> createProductA() const override {
        return std::make_unique<ConcreteProductA1>();
    }

    std::unique_ptr<AbstractProductB> createProductB() const override {
        return std::make_unique<ConcreteProductB1>();
    }
};

// Concrete Factory 2
class ConcreteFactory2 : public AbstractFactory {
public:
    std::unique_ptr<AbstractProductA> createProductA() const override {
        return std::make_unique<ConcreteProductA2>();
    }

    std::unique_ptr<AbstractProductB> createProductB() const override {
        return std::make_unique<ConcreteProductB2>();
    }
};

#endif//DESIGNPATTERNS_CONCRETEFACTORY_HPP
