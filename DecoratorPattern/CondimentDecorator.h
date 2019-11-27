#pragma once
#include "Beverage.h"
#include <string>
#include <memory>


class CondimentDecorator : public Beverage{

public:
    virtual std::string getDescription() = 0;
};

using CondimentDecoratorPtr = std::shared_ptr<CondimentDecorator>;