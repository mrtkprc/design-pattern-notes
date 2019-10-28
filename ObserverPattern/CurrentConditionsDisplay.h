#pragma once

#include <memory>
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement{
    SubjectPtr m_weatherData;
    double temperature;
    double humidity;
public:
    CurrentConditionsDisplay(Subject weatherData);
    void update(double temperature, double humidity, double pressure);


};

using CurrentConditionsDisplayPtr = std::shared_ptr<CurrentConditionsDisplay>;