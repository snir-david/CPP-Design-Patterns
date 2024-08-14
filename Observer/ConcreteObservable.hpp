#include "IObservable .hpp"
#include <vector>
#include <algorithm>

class ConcreteSubject : public IObservable {
private:
    std::vector<Observer*> observers;
    int state;

public:
    int getState() {
        return state;
    }

    void setState(int state) {
        this->state = state;
        notify();
    }

    void attach(Observer* observer) override {
        observers.push_back(observer);
    }

    void detach(Observer* observer) override {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void notify() override {
        for (Observer* observer : observers) {
            observer->update(state);
        }
    }
};
