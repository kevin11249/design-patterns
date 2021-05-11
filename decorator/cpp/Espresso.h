#pragma once

#include "Beverage.h"

class Espresso : public Beverage
{
public:
    Espresso() : Beverage{"Espresso"} {}

    double cost() const override
    {
        return 1.99;
    }
};