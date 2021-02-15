//
// Created by snira on 15/02/2021.
//

#include <iostream>

class HouseImp {
public:
    virtual void build() {};
};

class HouseType {
public:
    HouseImp *imp;

    HouseType(HouseImp *i) {
        this->imp = i;
    }

    virtual void BuildHouse() {};
};


class BigHouse : public HouseType {
public:
    BigHouse(HouseImp *i) : HouseType(i) {};

    void BuildHouse() override {
        std::cout << "BigHouse" << std::endl;
        this->imp->build();
    }
};

class RoundHouse : public HouseType {
public:
    RoundHouse(HouseImp *i) : HouseType(i) {};

    void BuildHouse() override {
        std::cout << "RoundHouse" << std::endl;
        this->imp->build();
    }
};

class StrawHouse : public HouseImp {
public:
    void build() override {
        std::cout << "StrawHouse" << std::endl;
    }
};

class WoodHouse : public HouseImp {
public:
    void build() override {
        std::cout << "WoodHouse" << std::endl;

    }
};

//int main(){
//    HouseType* a = new BigHouse(new StrawHouse);
//    a->BuildHouse();
//    HouseType* b = new RoundHouse(new WoodHouse);
//    b->BuildHouse();
//    return 0;
//}