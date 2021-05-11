#pragma once

#include <string>

#include "Beverage.h"
#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
    Soy(Beverage* beverage_ptr):beverage_ptr_{beverage_ptr}{}

    std::string get_description() const override
    {
        return beverage_ptr_->get_description() + ", Soy";
    }

    double cost() const override
    {
        return .15 + beverage_ptr_->cost();
    }

private:
    Beverage *beverage_ptr_;
};