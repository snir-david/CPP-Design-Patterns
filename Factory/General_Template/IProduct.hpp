//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_IPRODUCT_HPP
#define DESIGNPATTERNS_IPRODUCT_HPP


// IProduct Interface
class IProduct {
public:
    virtual ~IProduct() {}
    virtual void use() const = 0;
};



#endif//DESIGNPATTERNS_IPRODUCT_HPP
