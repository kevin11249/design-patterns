#include <iostream>

class ChocolateBoiler
{
public:
    static ChocolateBoiler &GetInstance();

    void fill();

    void drain();

    void boil();

    bool IsEmpty() const { return empty_; }

    bool IsBoiled() const { return boiled_; }

    void PrintStatus()
    {
        std::cout << (empty_ ? "empty " : "full ")
                  << (boiled_ ? "boiled" : "not boiled") << std::endl;
    }

private:
    ChocolateBoiler() : empty_{true}, boiled_{false} {}

    bool empty_;

    bool boiled_;

private:
    ChocolateBoiler(const ChocolateBoiler &) = delete;

    ChocolateBoiler &operator=(const ChocolateBoiler &) = delete;

    ChocolateBoiler(ChocolateBoiler &&) = delete;

    ChocolateBoiler &operator=(ChocolateBoiler &&) = delete;
};

ChocolateBoiler &ChocolateBoiler::GetInstance()
{
    static ChocolateBoiler instance;
    return instance;
}

void ChocolateBoiler::fill()
{
    if (IsEmpty())
    {
        empty_ = false;
        boiled_ = false;
    }
}

void ChocolateBoiler::drain()
{
    if (!IsEmpty() && IsBoiled())
    {
        empty_ = true;
    }
}

void ChocolateBoiler::boil()
{
    if (!IsEmpty() && !IsBoiled())
    {
        boiled_ = true;
    }
}
