//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_CONCRETECREATORA_HPP
#define DESIGNPATTERNS_CONCRETECREATORA_HPP

#include "ConcreteProduct.hpp"
#include "IFactory.hpp"
#include "IProduct.hpp"
#include <memory>

// Concrete Creator A
class ConcreteFactoryA : public IFactory {
public:
    std::unique_ptr<IProduct> createProduct() const override { return std::make_unique<ConcreteProductA>(); }
};

// Concrete Creator B
class ConcreteCreatorB : public IFactory {
public:
    std::unique_ptr<IProduct> createProduct() const override { return std::make_unique<ConcreteProductB>(); }
};


#endif//DESIGNPATTERNS_CONCRETECREATORA_HPP