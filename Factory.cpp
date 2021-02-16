#include <iostream>
#include <map>
#include <utility>

class Worker {
};

class Creator {
public:
    virtual Worker *create() {};

};

class Student : public Worker {
};

class StudentCreator : public Creator {
public:
    Worker *create() override {
        return new Student;
    }
};

class Teacher : public Worker {
};

class TeacherCreator : public Creator {
public:
    Worker *create() override {
        return new Teacher;
    }
};

class Admin : public Worker {
};

class AdminCreator : public Creator {
public:
    Worker *create() override {
        return new Admin;
    }
};

class WorkersFactory {
public:
    std::map<std::string, Creator *> FactoryMap;

    WorkersFactory() {
        std::pair<std::string, Creator *> p;
        p.first = "Student";
        p.second = new StudentCreator;
        FactoryMap.insert(p);
        p.first = "Teacher";
        p.second = new TeacherCreator;
        FactoryMap.insert(p);
        p.first = "Admin";
        p.second = new AdminCreator;
        FactoryMap.insert(p);
    }

    Worker *createProduct(std::string type) {
        auto c = FactoryMap.find(type);
        if (c != FactoryMap.end()) {
            c->second->create();
            std::cout << type << " was created" << std::endl;
        } else {
            std::cout << "wrong Type" << std::endl;
        }
    }
};

//int main() {
//    WorkersFactory *f = new WorkersFactory();
//    Worker *s = f->createProduct("Student");
//    Worker *t = f->createProduct("Teacher");
//    Worker *a = f->createProduct("Admin");
//    Worker *e = f->createProduct("Lecture");
//    return 0;
//}