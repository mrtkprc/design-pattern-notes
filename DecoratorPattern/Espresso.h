#pragma once

#include "Beverage.h"
#include <memory>

class Espresso : public Beverage  {
    public:
        Espresso();
        virtual  ~Espresso() = default;
        double cost() override;

};

using EspressoPtr = std::shared_ptr<Espresso>;