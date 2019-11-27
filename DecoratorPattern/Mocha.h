#pragma once
#include "CondimentDecorator.h"
#include <string>
#include <memory>


class Mocha : public CondimentDecorator{
    BeveragePtr m_beverage;
public:
    Mocha();
    virtual ~Mocha() = default;
    explicit Mocha(BeveragePtr beverage);
    std::string getDescription() override;
    double cost() override;
};

using MochaPtr = std::shared_ptr<Mocha>;