#pragma once
#include "ShellColor.h"

class Capsule :
    public ShellColor
{
public:
    Capsule();
    virtual ~Capsule() = 0;
    virtual float CalculateRarity();
    CapType GetType() { return m_type; }
    std::string GetName() { return m_name; }
private:
    std::string     m_name;
    Rarity          m_rarity;
    int             m_worth;
    CapType         m_type;
};

