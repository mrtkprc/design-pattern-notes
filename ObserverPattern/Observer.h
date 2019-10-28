#pragma once

class Observer{
public:
    virtual void update(double temp, double humidity, double pressure) = 0;
};

using ObserverPtr = std::shared_ptr<Observer>;