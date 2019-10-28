#pragma once

#include <memory>
#include "Observer.h"

class Subject{
public:
    virtual void registerObserver(ObserverPtr o) = 0;
    virtual void removeObserver(ObserverPtr o) = 0;
    virtual void notifyObservers() = 0;
};
using SubjectPtr = std::shared_ptr<Subject>;