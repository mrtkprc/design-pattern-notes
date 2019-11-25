#pragma once
#include "Beverage.h"

class CondimentDecorator : public Beverage{

public:
    virtual string getDescription() = 0;
};