#include "Candy.h"

/*-------------------------------------------------------------------------------*/
Candy::Candy()
    :
    Capsule(),
    Edible()
    {}
/*-------------------------------------------------------------------------------*/
Candy::Candy(std::string name, Rarity rarity, int worth, CapType type, std::string color, std::string flavor)
    :
    Capsule(name, rarity, worth, type, color),
    Edible(flavor)
    {}
