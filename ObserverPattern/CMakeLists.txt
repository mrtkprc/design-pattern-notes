cmake_minimum_required(VERSION 3.14)
project(ObserverPattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(ObserverPattern main.cpp ISubject.h IObserver.h IDisplayElement.h WeatherData.cpp WeatherData.h CurrentConditionsDisplay.cpp CurrentConditionsDisplay.h)