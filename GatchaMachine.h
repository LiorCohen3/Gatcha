#pragma once
#include "Capsule.h"
class GatchaMachine :
    public ShellType
{
public:
    GatchaMachine();
    ~GatchaMachine();
    int RollForFigure(int);
    int InsertCapsule(Capsule);
private:
    std::string     m_color;
    Series          m_theme;
    ShellType       m_type;
    int             m_capsule_cost;
    Capsule**       capsules;
    Capsule**       extra_capsules;
};

