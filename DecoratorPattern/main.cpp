#include <iostream>
#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"

int main() 
{
    BeveragePtr beverage = make_shared<Espresso>();
    std::cout << beverage->getDescription()+ " $"+ beverage->cost();

    BeveragePtr beverage2 = make_shared<HouseBlend>();
    beverage2 = make_shared<Mocha>(beverage2);
    beverage2 = make_shared<Mocha>(beverage2);
    beverage2 = make_shared<Whip>(beverage2);
    std::cout << beverage2->getDescription()+ " $"+ beverage2->cost();


}