#pragma once
#include <iostream>
#include "Enums.h"

class ShellType
{
public:
	ShellType();
	virtual ~ShellType();
private:
	std::string m_color;
};

