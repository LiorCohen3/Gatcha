#pragma once
#include <iostream>
#include "Enums.h"

class ShellColor
{
public:
	ShellColor();
	virtual ~ShellColor();
	std::string GetColor() { return m_color; }
private:
	std::string m_color;
};

