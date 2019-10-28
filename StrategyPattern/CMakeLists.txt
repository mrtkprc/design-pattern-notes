cmake_minimum_required(VERSION 3.14)
project(StrategyPattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(StrategyPattern main.cpp FlyBehaviors/IFlyBehavior.h FlyBehaviors/DerivedFlyBehaviors/FlyWithWings.h FlyBehaviors/DerivedFlyBehaviors/FlyWithWings.cpp FlyBehaviors/DerivedFlyBehaviors/FlyNoWay.cpp FlyBehaviors/DerivedFlyBehaviors/FlyNoWay.h QuackBehaviors/IQuackBehavior.h QuackBehaviors/DerivedQuackBehaviors/Queak.cpp QuackBehaviors/DerivedQuackBehaviors/Queak.h QuackBehaviors/DerivedQuackBehaviors/Squeak.cpp QuackBehaviors/DerivedQuackBehaviors/Squeak.h Ducks/Duck.cpp Ducks/Duck.h Ducks/DerivedDucks/MallardDuck.cpp Ducks/DerivedDucks/MallardDuck.h Ducks/DerivedDucks/RubberDuck.cpp Ducks/DerivedDucks/RubberDuck.h)