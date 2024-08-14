#include "IObserver.hpp"

class IObservable {
public:
    virtual ~IObservable() {}
    virtual void attach(Observer* observer) = 0;
    virtual void detach(Observer* observer) = 0;
    virtual void notify() = 0;
};