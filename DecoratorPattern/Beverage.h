#pragma once
#include <iostream>


class Beverage {
    std::string m_description = "Unknown Beverage";
public:
    std::string getDescription();
    virtual double cost() = 0;
};

using BeveragePtr = std::shared_ptr<Beverage>;