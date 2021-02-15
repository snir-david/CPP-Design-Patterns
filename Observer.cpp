#include <iostream>
#include <list>
#include <algorithm>

class Observer {
public:
    virtual void update(std::string obstate){};
};

class ConcObserver : public Observer {
public:
    std::string observerState;

    void update(std::string obstate) override {
        this->observerState = obstate;
        std::cout << "State Updated: " << this->observerState << std::endl;
    }
};

class Subject {
public:
    std::list<Observer *> observerlist;

    virtual void Attach(Observer *ob) {};

    virtual void Detach(Observer *ob) {};

    virtual void Notify(){};
};

class ConcSubject : public Subject {
public:
    std::string SubjectState;

    ConcSubject(std::string s) {
        this->SubjectState = s;
    }

    void Attach(Observer *ob) override {
        this->observerlist.push_front(ob);
        std::cout << "observer added" << std::endl;

    }

    void Detach(Observer *ob) override {
        this->observerlist.remove(ob);
        std::cout << "observer removed" << std::endl;

    }

    void Notify() override {
        for (auto observer: this->observerlist) {
            observer->update(this->SubjectState);
        }
    }

    std::string GetState() {
        return this->SubjectState;
    }

    void SetState(std::string s) {
        this->SubjectState = s;
    }
};

int main() {
    Subject* c1 = new ConcSubject("First Subject");
    Subject* c2 = new ConcSubject("Second Subject");
    Observer* ob1 = new ConcObserver();
    Observer* ob2 = new ConcObserver();
    c1->Attach(ob1);
    c2->Attach(ob2);
    c1->Notify();
    c2->Notify();
    c1->Detach(ob1);
    c2->Detach(ob2);
    return 0;
}