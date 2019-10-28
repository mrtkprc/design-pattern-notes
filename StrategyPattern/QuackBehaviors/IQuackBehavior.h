#pragma  once
#include <memory>

class IQuackBehavior{
public:
    virtual void quack() = 0;
};

using IQuackBehaviorPtr = std::shared_ptr<IQuackBehavior>;