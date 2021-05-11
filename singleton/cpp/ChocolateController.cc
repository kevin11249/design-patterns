#include "ChocolateBoiler.h"

int main()
{
    ChocolateBoiler &boiler = ChocolateBoiler::GetInstance();
    boiler.PrintStatus();

    boiler.fill();
    boiler.PrintStatus();

    boiler.boil();
    boiler.PrintStatus();

    boiler.drain();
    boiler.PrintStatus();
}