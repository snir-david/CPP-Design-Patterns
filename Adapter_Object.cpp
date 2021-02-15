#include <iostream>;

class Target {
public:

    virtual void Req() {};
};

class Adaptee {
public:
    void specificReq() {
        std::cout << "Specific Req" << std::endl;
    }
};

class Adapter : public Target {
    Adaptee *a;
public:
    Adapter(Adaptee *adp) {
        this->a = adp;
    }

    void Req() override {
        std::cout << "Req" << std::endl;
        a->specificReq();
    };
};

//int main(){
//    Target* t = new Adapter(new Adaptee);
//    t->Req();
//    return 0;
//}
