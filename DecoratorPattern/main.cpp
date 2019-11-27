#include <iostream>
#include <memory>
#include <string>

#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"

using namespace std;
int main() 
{

      BeveragePtr beverage = make_shared<Espresso>();
      std::cout << beverage->getDescription()+ " $" + std::to_string(beverage->cost());
        /*
        BeveragePtr beverage2 = make_shared<HouseBlend>();
        beverage2 = make_shared<Mocha>(beverage2);
        beverage2 = make_shared<Mocha>(beverage2);

        std::cout << beverage2->getDescription()+ " $" + std::to_string(beverage2->cost());
        */

}