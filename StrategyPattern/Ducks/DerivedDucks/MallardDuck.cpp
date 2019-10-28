#include <iostream>
#include "MallardDuck.h"
#include "../../FlyBehaviors/DerivedFlyBehaviors/FlyWithWings.h"
#include "../../QuackBehaviors/DerivedQuackBehaviors/Queak.h"

void MallardDuck::display() {

    std::cout << "MallardDuck Display" << std::endl;

}

MallardDuck::MallardDuck() {
    setFlyBehavior(std::make_shared<FlyWithWings>());
    setQuackBehavior(std::make_shared<Queak>());
}
