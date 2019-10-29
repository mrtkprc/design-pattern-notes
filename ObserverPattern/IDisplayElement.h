#pragma once

#include <bits/shared_ptr.h>

class IDisplayElement{
public:
    virtual void display() = 0;
};

using DisplayElementPtr = std::shared_ptr<IDisplayElement>;