//
// Created by SnirN on 8/7/2024.
//
class Observer {
public:
    virtual ~Observer() {}
    virtual void update(int state) = 0;
};