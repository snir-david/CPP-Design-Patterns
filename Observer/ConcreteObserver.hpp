//
// Created by SnirN on 8/7/2024.
//

#ifndef DESIGNPATTERNS_CONCRETEOBSERVER_HPP
#define DESIGNPATTERNS_CONCRETEOBSERVER_HPP

#include "ConcreteObservable.hpp"
#include <string>
#include <iostream>

class ConcreteObserver : public Observer {
private:
    std::string name;
    ConcreteSubject& subject;

public:
    ConcreteObserver(const std::string& name, ConcreteSubject& subject) : name(name), subject(subject) {
        subject.attach(this);
    }

    ~ConcreteObserver() {
        subject.detach(this);
    }

    void update(int state) override {
        std::cout << "Observer " << name << " notified. New state: " << state << std::endl;
    }
};

#endif//DESIGNPATTERNS_CONCRETEOBSERVER_HPP
