#pragma once

#include <memory>
#include "IDisplayElement.h"
#include "IObserver.h"
#include "ISubject.h"

class CurrentConditionsDisplay : public IObserver, public IDisplayElement{
    SubjectPtr m_weatherData;
    double temperature;
    double humidity;

public:
    explicit CurrentConditionsDisplay(SubjectPtr weatherData);
    void update(double temperature, double humidity, double pressure);
    void display();

};

using CurrentConditionsDisplayPtr = std::shared_ptr<CurrentConditionsDisplay>;