#pragma once

#include "Beverage.h"

class Decaf : public Beverage
{
public:
    Decaf() : Beverage{"Decaf"} {}

    double cost() const override
    {
        return 1.05;
    }
};