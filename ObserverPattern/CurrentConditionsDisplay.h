#pragma once

#include <memory>
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class CurrentConditionsDisplay : public std::enable_shared_from_this<CurrentConditionsDisplay>, public Observer, public DisplayElement{
    SubjectPtr m_weatherData;
    double temperature;
    double humidity;
public:
    explicit CurrentConditionsDisplay(SubjectPtr weatherData);
    void update(double temperature, double humidity, double pressure);
    void display();

};

using CurrentConditionsDisplayPtr = std::shared_ptr<CurrentConditionsDisplay>;