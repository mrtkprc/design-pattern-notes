#include "Mocha.h"

Mocha::Mocha(BeveragePtr beverage)
{
    m_beverage = beverage;
}

std::string Mocha::getDescription()
{
    return m_beverage->getDescription() +", Mocha";
}

double Mocha::cost()
{
    return 0.2 + m_beverage->cost();
}