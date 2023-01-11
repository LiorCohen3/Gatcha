#pragma once
#include <iostream>
#include "Enums.h"

class ShellColor
{
public:
	ShellColor();
	ShellColor(std::string color);
	virtual ~ShellColor() = 0;	// abstract
	std::string GetColor() { return m_color; }
private:
	std::string m_color;
};

