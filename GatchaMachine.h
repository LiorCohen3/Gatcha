#pragma once
#include <vector>
#include "Capsule.h"
#include "ShellColor.h"
#include "Enums.h"

using namespace std;

class GatchaMachine :
    public ShellColor
{
public:
    GatchaMachine();
    GatchaMachine(Series theme, int capsule_cost, vector<Capsule*> capsules, std::string color);
    ~GatchaMachine();
    Capsule RollForFigure(int num);
    bool InsertCapsule(Capsule capsule);
private:
    Series                  m_theme;
    int                     m_capsule_cost;
    std::vector<Capsule*>   m_capsules;
    std::vector<Capsule*>   m_extra_capsules;

};

