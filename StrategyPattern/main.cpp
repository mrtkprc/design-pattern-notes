#include <iostream>

#include "FlyBehaviors/DerivedFlyBehaviors/FlyWithWings.h"
#include "FlyBehaviors/DerivedFlyBehaviors/FlyNoWay.h"

#include "Ducks/Duck.h"
#include "Ducks/DerivedDucks/MallardDuck.h"
#include "Ducks/DerivedDucks/RubberDuck.h"


int main() {

    Duck *mallardDuck = new MallardDuck();
    Duck *rubberDuck = new RubberDuck();

    mallardDuck->display();
    mallardDuck->performFly();
    mallardDuck->performQuack();

    std::cout << "--------------------------------" << std::endl;

    rubberDuck->display();
    rubberDuck->performFly();
    rubberDuck->performQuack();

    std::cout << "--------------------------------" << std::endl;
    mallardDuck->setFlyBehavior(std::make_shared<FlyNoWay>());
    std::cout << "Since mallardDuck is injured, it can not fly anymore.:(" << std::endl;

    mallardDuck->display();
    mallardDuck->performFly();
    mallardDuck->performQuack();

    std::cout << "--------------------------------" << std::endl;


    return 0;
}