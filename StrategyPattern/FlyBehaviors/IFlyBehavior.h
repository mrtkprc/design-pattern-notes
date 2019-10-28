#pragma  once//
#include <memory>

class IFlyBehavior{
public:
    virtual void fly() = 0;
};

using IFlyBehaviorPtr = std::shared_ptr<IFlyBehavior>;