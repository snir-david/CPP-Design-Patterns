#include <iostream>
#include <map>
#include <utility>

class Character {
public:
    int col, row;
    std::string type;
    std::string condition;

    Character(std::string s, int x, int y, std::string condition) {
        this->type = s;
        this->row = x;
        this->col = y;
        this->condition = condition;
    }

    virtual void print() {};

    void changeCon(std::string condition) {
        this->condition = condition;
    }
};

class Terrorist : public Character {
public:
    Terrorist(int x, int y, std::string s) : Character("Terrorist", x, y, s) {};

    void print() override {
        std::cout << "Terrorist in" << this->col << this->row << std::endl;
    }
};

class CounterTerrorist : public Character {
public:
    CounterTerrorist(int x, int y, std::string s) : Character("Counter Terrorist", x, y, s) {};

    void print() override {
        std::cout << "Counter Terrorist in" << this->col << this->row << std::endl;
    }
};

class Flyweight_Factory {
public:
    static Character *
    getFly(std::string type, int x, int y, std::string condition, std::map<std::string, Character *> &FlyweightMap) {
        auto c = FlyweightMap.find(type);
        if (c != FlyweightMap.end() && c->second->condition == condition) {
            c->second->row = x;
            c->second->col = y;
            return FlyweightMap.find(type)->second;
        } else {
            if (type == "Terrorist") {
                std::pair<std::string, Character *> p(type, new Terrorist(x, y, condition));
                FlyweightMap.insert(p);
                return FlyweightMap.find(type)->second;
            } else if (type == "Counter Terrorist") {
                std::pair<std::string, Character *> p(type, new CounterTerrorist(x, y, condition));
                FlyweightMap.insert(p);
                return FlyweightMap.find(type)->second;
            }
        }
    }
};

//
//int main() {
//    std::map<std::string, Character *> FlyweightMap;
//    Character *c1 = Flyweight_Factory::getFly("Counter Terrorist", 10, 10, "alive", FlyweightMap);
//    std::cout << c1->type << "-" << c1->condition << "-" << c1->col << "-" << c1->row << std::endl;
//    Character *c2 = Flyweight_Factory::getFly("Counter Terrorist", 15, 12, "alive", FlyweightMap);
//    std::cout << c2->type << "-" << c2->condition << "-" << c2->col << "-" << c2->row << std::endl;
//
//    Character *t1 = Flyweight_Factory::getFly("Terrorist", 20, 10, "alive", FlyweightMap);
//    std::cout << t1->type << "-" << t1->condition << "-" << t1->col << "-" << t1->row << std::endl;
//    Character *t2 = Flyweight_Factory::getFly("Terrorist", 10, 20, "alive", FlyweightMap);
//    std::cout << t2->type << "-" << t2->condition << "-" << t2->col << "-" << t2->row << std::endl;
//
//    std::cout << c1 << "-" << c2 << std::endl;
//    std::cout << t1 << "-" << t2 << std::endl;
//
//
//    return 0;
//}
