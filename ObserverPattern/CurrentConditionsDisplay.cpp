#include <iostream>
#include "CurrentConditionsDisplay.h"

//constructor
CurrentConditionsDisplay::CurrentConditionsDisplay(SubjectPtr weatherData) :
    temperature(0),
    humidity(0),
    m_weatherData(weatherData)
{
    m_weatherData->registerObserver(shared_from_this());
}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionsDisplay::display()
{
    std::cout << "Current Conditions: "<< temperature << "C degrees and " << humidity <<"% humidity"<<std::endl;
}
