#pragma once

#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend() : Beverage{"HouseBlend Coffee"} {}

    double cost() const override
    {
        return .89;
    }
};