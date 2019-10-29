#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

int main() {

    WeatherDataPtr weatherData = std::make_shared<WeatherData>();
    CurrentConditionsDisplayPtr currentDisplay = std::make_shared<CurrentConditionsDisplay>(weatherData);




    return 0;
}