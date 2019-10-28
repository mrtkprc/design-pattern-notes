#pragma once

#include "../IQuackBehavior.h"

class Squeak : public IQuackBehavior{
public:
    void quack() override ;
};