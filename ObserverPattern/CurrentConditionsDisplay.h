#pragma once

#include <memory>
#include "IDisplayElement.h"
#include "IObserver.h"
#include "ISubject.h"

class CurrentConditionsDisplay : public IObserver, public IDisplayElement{
    ISubject *m_weatherData;
    double m_temperature;
    double m_humidity;
    double m_pressure;

public:
    explicit CurrentConditionsDisplay(ISubject *weatherData);
    void update(double temperature, double humidity, double pressure) override ;
    void display() override ;

};

using CurrentConditionsDisplayPtr = std::shared_ptr<CurrentConditionsDisplay>;