#pragma once
#include "Edible.h"
#include "Capsule.h"
class Candy :
    public Edible,
    public Capsule
{
public:
    Candy();
    ~Candy();
private:
};

