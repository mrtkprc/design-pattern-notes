#pragma once

class IObserver{
public:
    virtual void update(double temp, double humidity, double pressure) = 0;
};

using ObserverPtr = std::shared_ptr<IObserver>;