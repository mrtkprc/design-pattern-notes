#include <iostream>
#include "CurrentConditionsDisplay.h"

//constructor

CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject *weatherData) :
    m_temperature(0),
    m_humidity(0),
    m_pressure(0),
    m_weatherData(weatherData)
{
    m_weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure)
{
    std::cout << "CurrentConditionsDisplay::update" << std::endl;
    this->m_temperature = temperature;
    this->m_humidity = humidity;
    this->m_pressure = pressure;
    display();
}

void CurrentConditionsDisplay::display()
{
    std::cout << "CurrentConditionsDisplay::display - Temp: "<< m_temperature << "C degrees, Humidity:  " << m_humidity <<"% and Pressure: "<< m_pressure <<std::endl;
}
