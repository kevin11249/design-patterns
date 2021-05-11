#pragma once

#include <string>
#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
    std::string get_description() const = 0;

    virtual ~CondimentDecorator(){}
};