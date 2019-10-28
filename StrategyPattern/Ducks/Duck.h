#pragma  once

#include "../FlyBehaviors/IFlyBehavior.h"
#include "../QuackBehaviors/IQuackBehavior.h"

class Duck{
    IFlyBehaviorPtr flyBehavior;
    IQuackBehaviorPtr quackBehavior;
public:
    virtual void swim();
    virtual void display();
    void performQuack();
    void performFly();
    void setFlyBehavior(IFlyBehaviorPtr flyBehavior);
    void setQuackBehavior(IQuackBehaviorPtr quackBehavior);
    //....
};