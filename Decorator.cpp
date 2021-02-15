#include <iostream>

class Component {
public:
    virtual void operation() {};
};

class ConcCompA : public Component {
    void operation() override {
        std::cout << "ConcCompA" << std::endl;
    }
};

class ConcCompB : public Component {
    void operation() override {
        std::cout << "ConcCompB" << std::endl;
    }
};

class Decorator : public Component {
public:
    Component *c;
    Decorator(Component *com) {
        this->c = com;
    }
};

class ConDecA : public Decorator {
public:
    ConDecA(Component* c): Decorator(c){};
    void operation() override {
        this->c->operation();
        std::cout << "ConDecA" << std::endl;
    }
};

class ConDecB : public Decorator {
public:
    ConDecB(Component* c): Decorator(c){};
    void operation() override {
        this->c->operation();
        std::cout << "ConDecB" << std::endl;
    }
};

//int main() {
//    Component* c = new ConDecA(new ConDecB(new ConcCompA));
//    Component* c1 = new ConDecB(new ConDecA(new ConcCompB));
//
//    c->print();
//    c1->print();
//
//    return 0;
//}