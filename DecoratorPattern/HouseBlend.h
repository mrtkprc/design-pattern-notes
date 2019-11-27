#pragma once

#include "Beverage.h"

class HouseBlend : public Beverage{
public:
    HouseBlend();
    virtual ~HouseBlend() = default;
    double cost() override;
};