#pragma once

#include <memory>
#include "IObserver.h"

class ISubject{
public:
    virtual void registerObserver(IObserver *o) = 0;
    virtual void removeObserver(IObserver *o) = 0;
    virtual void notifyObservers() = 0;
};
using SubjectPtr = std::shared_ptr<ISubject>;