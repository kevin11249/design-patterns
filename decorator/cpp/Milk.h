#pragma once

#include <string>
#include <memory>

#include "Beverage.h"
#include "CondimentDecorator.h"

class Milk : public CondimentDecorator
{
public:
    Milk(Beverage* beverage_ptr):beverage_ptr_{beverage_ptr}{}

    std::string get_description() const override
    {
        return beverage_ptr_->get_description() + ", Milk";
    }

    double cost() const override
    {
        return .10 + beverage_ptr_->cost();
    }

private:
    Beverage *beverage_ptr_;
};