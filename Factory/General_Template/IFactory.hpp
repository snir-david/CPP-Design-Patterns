//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_FACTORY_HPP
#define DESIGNPATTERNS_FACTORY_HPP

#include "IProduct.hpp"
#include <memory>

// Creator Interface
class IFactory {
public:
    virtual ~IFactory() {}
    virtual std::unique_ptr<IProduct> createProduct() const = 0;

    void someOperation() const {
        std::unique_ptr<IProduct> product = this->createProduct();
        product->use();
    }
};
#endif//DESIGNPATTERNS_FACTORY_HPP
