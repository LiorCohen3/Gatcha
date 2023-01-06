#pragma once
#include "ShellType.h"

class Capsule :
    public ShellType
{
public:
    Capsule();
    virtual ~Capsule();
    virtual int CalculateWorth();
    virtual std::string GetType() = 0;
    virtual std::string GetName() = 0;
private:
    std::string m_name;
};

