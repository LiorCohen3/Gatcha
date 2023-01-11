#include "Toy.h"

/*-------------------------------------------------------------------------------*/
Toy::Toy()
    :
    Capsule(),
    Figure()
    {}
/*-------------------------------------------------------------------------------*/
Toy::Toy(std::string name, Rarity rarity, int worth, CapType type, std::string color, Series theme)
    :
    Capsule(name, rarity, worth, type, color),
    Figure(theme)
    {}
/*-------------------------------------------------------------------------------*/
