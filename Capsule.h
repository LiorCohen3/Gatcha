#pragma once
#include <iostream>
#include "ShellColor.h"

class Capsule :
    public ShellColor
{
public:
    Capsule();
    Capsule(std::string name, Rarity rarity, int worth, CapType type, std::string color);
    virtual ~Capsule() = 0; // abstract
    virtual float CalculateRarity();
    CapType GetType() { return m_type; }
    std::string GetName() { return m_name; }
private:
    std::string     m_name;
    Rarity          m_rarity;
    int             m_worth;
    CapType         m_type;
};

