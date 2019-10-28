#pragma once

#include <vector>
#include <memory>

#include "Subject.h"

class WeatherData : public Subject{
    std::shared_ptr<std::vector<Observer>> observers;
    double temperature;
    double humidity;
    double pressure;

public:
    void registerObserver(ObserverPtr o) override;
    void removeObserver(ObserverPtr o) override;
    void notifyObservers() override;

    void measurementsChanged();
    void setMeasurements(double temp, double humidity, double pressure);
};

using WeatherDataPtr = std::shared_ptr<WeatherData>;