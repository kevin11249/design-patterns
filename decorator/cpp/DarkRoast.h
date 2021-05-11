#pragma once

#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast() : Beverage{"DarkRoast"} {}

    double cost() const override
    {
        return .99;
    }
};