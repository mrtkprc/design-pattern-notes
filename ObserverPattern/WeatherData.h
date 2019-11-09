#pragma once

#include <vector>
#include <memory>

#include "ISubject.h"

class WeatherData : public ISubject{
    std::vector<IObserver*> observers;
    double m_temperature;
    double m_humidity;
    double m_pressure;

public:
    WeatherData();
    void registerObserver(IObserver *o) override;
    void removeObserver(IObserver *o) override;
    void notifyObservers() override;

    void measurementsChanged();
    void setMeasurements(double temp, double humidity, double pressure);
};

using WeatherDataPtr = std::shared_ptr<WeatherData>;