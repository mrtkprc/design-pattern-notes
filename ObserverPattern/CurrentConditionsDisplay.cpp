//
// Created by mert on 28.10.2019.
//

#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject weatherData) {
    m_weatherData = std::make_shared<Subject>(weatherData);

}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure) {
    return 0;
}
