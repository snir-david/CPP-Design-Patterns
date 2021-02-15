#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>


class Compenent {
public:
    std::string id;
    std::list<Compenent *> compList;

    Compenent(std::string s) {
        this->id = s;
    }

    virtual void operation() {};

    void Add(Compenent *c) {
        compList.push_back(c);
    };

    void Remove(Compenent *c) {
        compList.remove(c);
    };

    virtual void GetChild() {};
};

class Leaf : public Compenent {
public:
    Leaf(std::string s) : Compenent(s) {};

    void operation() override {
        std::cout << "Leaf" << std::endl;
    }

    void GetChild() override {
        std::cout << this->id << std::endl;
    }

};

class Composite : public Compenent {
public:
    Composite(std::string s) : Compenent(s) {};

    void operation() override {
        std::cout << "Composite" << std::endl;
    }

    void GetChild(){
        for (auto c : this->compList){
            std::cout << this->id << std::endl;
            c->GetChild();
        }
    }

};

//int main() {
//    Compenent *c = new Composite("c");
//    Compenent *c1 = new Composite("c1");
//    Compenent *c2 = new Composite("c2");
//    Compenent *l = new Leaf("l");
//    Compenent *l1 = new Leaf("l1");
//    Compenent *l2 = new Leaf("l2");
//
//    c->Add(c1);
//    c->Add(c2);
//    c->Add(l);
//    c2->Add(l2);
//    c1->Add(l1);
//
//    c->GetChild();
//    return 0;
//};