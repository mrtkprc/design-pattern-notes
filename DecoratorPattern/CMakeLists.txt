cmake_minimum_required(VERSION 3.14)
project(DecoratorPattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(DecoratorPattern main.cpp Espresso.h Espresso.cpp Beverage.cpp Beverage.h Mocha.h Mocha.cpp HouseBlend.h HouseBlend.cpp CondimentDecorator.h)