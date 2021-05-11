#pragma once

#include "string"

class Beverage
{
public:
    Beverage(std::string description = "Unknow Beverage")
        : description_{description} {}

    virtual std::string get_description() const
    {
        return description_;
    }

    virtual double cost() const = 0;

    virtual ~Beverage(){}

private:
    std::string description_;
};