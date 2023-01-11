#include "Capsule.h"
/*-------------------------------------------------------------------------------*/
Capsule::Capsule()
    :
    m_name(" "),
    m_rarity(),
    m_type(),
    m_worth(),
    ShellColor(" ") // color
    {}
/*-------------------------------------------------------------------------------*/
Capsule::Capsule(std::string name, Rarity rarity, int worth, CapType type, std::string color)
    :
    m_name(name),
    m_rarity(rarity),
    m_type(type),
    m_worth(worth),
    ShellColor(color) // color
    {}
/*-------------------------------------------------------------------------------*/
float Capsule::CalculateRarity()
{

}
/*-------------------------------------------------------------------------------*/
