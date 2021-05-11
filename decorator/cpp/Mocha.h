#pragma once

#include <string>
#include <memory>

#include "Beverage.h"
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage* beverage_ptr):beverage_ptr_{beverage_ptr}{}

    std::string get_description() const override
    {
        return beverage_ptr_->get_description() + ", Mocha";
    }

    double cost() const override
    {
        return .20 + beverage_ptr_->cost();
    }

private:
    Beverage *beverage_ptr_;
};