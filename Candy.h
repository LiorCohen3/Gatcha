#pragma once
#include "Edible.h"
#include "Capsule.h"
class Candy :
    public Edible,
    public Capsule
{
public:
    Candy();
    Candy(std::string name, Rarity rarity, int worth, CapType type, std::string color, std::string flavor);
    ~Candy();
private:
};

