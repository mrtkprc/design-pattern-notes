#include <iostream>
#include "Duck.h"

void Duck::setFlyBehavior(IFlyBehaviorPtr flyBehavior) {
    this->flyBehavior = flyBehavior;

}

void Duck::setQuackBehavior(IQuackBehaviorPtr quackBehavior) {
    this->quackBehavior = quackBehavior;

}

void Duck::swim() {
    std::cout << "Duck Swim" << std::endl;

}

void Duck::display() {
    std::cout << "Duck Display" << std::endl;
}

void Duck::performQuack() {
    quackBehavior->quack();
}

void Duck::performFly() {
    flyBehavior->fly();
}
