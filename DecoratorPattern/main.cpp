#include <iostream>
#include <memory>
#include <string>

#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"


int main() 
{
      BeveragePtr beverage = std::make_shared<Espresso>();
      std::cout << beverage->getDescription()+ " $" + std::to_string(beverage->cost());

      BeveragePtr beverage2 = std::make_shared<HouseBlend>();

      beverage2 = std::make_shared<Mocha>(beverage2);
      beverage2 = std::make_shared<Mocha>(beverage2);

      std::cout << std::endl << beverage2->getDescription()+ " $" + std::to_string(beverage2->cost());
}