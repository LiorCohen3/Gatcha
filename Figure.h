#pragma once
#include <iostream>
#include "Enums.h"

class Figure
{
public:
	Figure();
	virtual ~Figure();
	virtual Series GetCategory() = 0;
private:
	Series m_theme;
};

