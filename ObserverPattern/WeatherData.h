#pragma once

#include <vector>
#include <memory>

#include "ISubject.h"

class WeatherData : public ISubject{
    std::vector<ObserverPtr> observers;
    double temperature;
    double humidity;
    double pressure;

public:
    WeatherData();
    void registerObserver(ObserverPtr o) override;
    void removeObserver(ObserverPtr o) override;
    void notifyObservers() override;

    void measurementsChanged();
    void setMeasurements(double temp, double humidity, double pressure);
};

using WeatherDataPtr = std::shared_ptr<WeatherData>;