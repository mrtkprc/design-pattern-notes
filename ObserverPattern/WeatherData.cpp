#include <algorithm>
#include <iostream>
#include "WeatherData.h"

void WeatherData::registerObserver(IObserver *o)
{
    std::cout << "WeatherData::registerObserver" << std::endl;

    observers.push_back(o);
}

void WeatherData::removeObserver(IObserver *o)
{
    std::cout << "WeatherData::removeObserver" << std::endl;

    auto iterator = std::find(observers.begin(), observers.end(), o);

    if(iterator != observers.end())
    {
        std::cout << "IObserver is deleted." << std::endl;
        observers.erase(iterator);
    }

}

void WeatherData::notifyObservers() {
    std::cout << "WeatherData::notifyObservers" << std::endl;

    for(const auto& item: observers)
    {
        item->update(m_temperature, m_humidity, m_pressure);
    }

}

void WeatherData::measurementsChanged() {
    std::cout << "WeatherData::measurementsChanged" << std::endl;
    notifyObservers();
}

void WeatherData::setMeasurements(double temp, double humidity, double pressure) {
    std::cout << "WeatherData::setMeasurements" << std::endl;

    this->m_temperature = temp;
    this->m_humidity = humidity;
    this->m_pressure = pressure;

    measurementsChanged();
}

WeatherData::WeatherData() :
    m_temperature(0),
    m_pressure(0),
    m_humidity(0)
{
    std::cout << "WeatherData::WeatherData" << std::endl;
}

