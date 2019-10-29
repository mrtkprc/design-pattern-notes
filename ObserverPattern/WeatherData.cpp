#include <algorithm>
#include <iostream>
#include "WeatherData.h"

void WeatherData::registerObserver(ObserverPtr o)
{
    observers.push_back(o);
}

void WeatherData::removeObserver(ObserverPtr o)
{
    auto iterator = std::find(observers.begin(), observers.end(), o);

    if(iterator != observers.end())
    {
        std::cout << "Observer is deleted." << std::endl;
        observers.erase(iterator);
    }

}

void WeatherData::notifyObservers() {
    for(const auto& item: observers)
    {
        item->update(temperature, humidity, pressure);
    }

}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(double temp, double humidity, double pressure) {
    this->temperature = temp;
    this->humidity = humidity;
    this->pressure = pressure;
}

WeatherData::WeatherData() {

}

