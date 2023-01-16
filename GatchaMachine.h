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

    int RollForCapsule(int num);
    bool InsertCapsule(Capsule* capsule);
    Series GetTheme() { return m_theme; }
    int GetPrice() { return m_capsule_cost; }
    void InsertCapsuleFromExtra(Capsule* capsule);
    void AddEpicsFromExtra(int num);
    void AddLegendarysFromExtra();
    void DeleteExtras() { m_extra_capsules.clear(); }
private:
    Series                  m_theme;
    int                     m_capsule_cost;
    std::vector<Capsule*>   m_capsules;
    std::vector<Capsule*>   m_extra_capsules;

};

