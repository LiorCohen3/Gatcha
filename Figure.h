#pragma once
#include <iostream>
#include "Enums.h"

class Figure
{
public:
	Figure();
	virtual ~Figure() = 0;
	virtual Series GetCategory();
private:
	Series m_theme;
};

