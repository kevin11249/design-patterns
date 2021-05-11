#include <iostream>
#include <string>
#include <memory>

#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "HouseBlend.h"
#include "Decaf.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"
#include "Milk.h"

int main()
{
	Beverage *beverage = new Espresso;
	std::cout << beverage->get_description() << " $" << beverage->cost() << std::endl;
    delete beverage;
     
	Beverage * beverage2= new DarkRoast;
	beverage2 = new Mocha{beverage2};
	beverage2 = new Mocha{beverage2};
	beverage2 = new Whip{beverage2};
	std::cout << beverage2->get_description() << " $" << beverage2->cost() << std::endl;
    delete beverage2;

	Beverage * beverage3= new HouseBlend;
	beverage3 = new Soy{beverage3};
	beverage3 = new Mocha{beverage3};
	beverage3 = new Whip{beverage3};
    std::cout << beverage3->get_description() << " $" << beverage3->cost() << std::endl;
	delete beverage3;

	return 0;
}