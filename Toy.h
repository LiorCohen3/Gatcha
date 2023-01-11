#pragma once
#include "Figure.h"
#include "Capsule.h"
class Toy :
    public Figure,
    public Capsule
{
public:
    Toy();
    Toy(std::string name, Rarity rarity, int worth, CapType type, std::string color, Series theme);
    ~Toy();
private:
};

