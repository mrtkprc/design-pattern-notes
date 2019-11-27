#pragma once
#include "CondimentDecorator.h"


class Mocha : public CondimentDecorator{
    BeveragePtr m_beverage;
public:
    Mocha(BeveragePtr beverage);
    virtual string getDescription() override;
    double cost();

};