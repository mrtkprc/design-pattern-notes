#pragma once
#include <iostream>
#include <string>
#include <memory>

class Beverage {
protected:
    std::string m_description = "Unknown Beverage";
public:
    virtual std::string getDescription();
    virtual double cost() = 0;
};

using BeveragePtr = std::shared_ptr<Beverage>;