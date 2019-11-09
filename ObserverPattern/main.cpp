#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

int main() {

    WeatherDataPtr weatherData = std::make_shared<WeatherData>();
    CurrentConditionsDisplayPtr currentDisplay = std::make_shared<CurrentConditionsDisplay>(weatherData.get());
    weatherData->setMeasurements(10,20,30);

    std::cout << "Measurements are changing..." << std::endl;

    weatherData->setMeasurements(50,60,70);

    std::cout << std::endl << std::endl <<"WeatherData Information:" << std::endl;

    currentDisplay->display();

    return 0;
}