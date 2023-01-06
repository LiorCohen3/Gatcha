#pragma once
#include "Figure.h"
#include "Capsule.h"
class Toy :
    public Figure,
    public Capsule
{
public:
    Toy();
    ~Toy();
private:
    Rarity m_rarity;
};

