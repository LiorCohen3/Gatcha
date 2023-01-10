#pragma once
#include <iostream>

class Edible
{
public:
	Edible();
	virtual ~Edible() = 0;
	virtual std::string GetFlavor();
private:
	std::string m_flavor;
};

