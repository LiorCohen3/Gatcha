#pragma once
#include <iostream>

class Edible
{
public:
	Edible();
	virtual ~Edible();
	virtual std::string GetFlavor() = 0;
private:
	std::string m_flavor;
};

