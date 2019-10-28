#include <iostream>
#include "RubberDuck.h"
#include "../../FlyBehaviors/DerivedFlyBehaviors/FlyNoWay.h"
#include "../../QuackBehaviors/DerivedQuackBehaviors/Squeak.h"

void RubberDuck::display() {

    std::cout << "RubberDuck Display" << std::endl;


}

RubberDuck::RubberDuck() {
    setFlyBehavior(std::make_shared<FlyNoWay>());
    setQuackBehavior(std::make_shared<Squeak>());
}
