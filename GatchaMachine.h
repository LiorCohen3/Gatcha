#pragma once
#include <vector>
#include "Capsule.h"

class GatchaMachine :
    public ShellColor
{
public:
    GatchaMachine();
    ~GatchaMachine();
    int RollForFigure(int);
    bool InsertCapsule(Capsule);
private:
    std::string             m_color;
    Series                  m_theme;
    ShellColor              m_type;
    int                     m_capsule_cost;
    Capsule**               m_capsules;
    std::vector<Capsule*>   m_extra_capsules;
};

