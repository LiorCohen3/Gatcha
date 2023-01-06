#pragma once
#include "Capsule.h"
class Player
{
public:
	Player();
	~Player();
	Capsule PlayMachine(int);
	int CalculateEarnings();
private:
	std::string m_name;
	int			m_money;
	Capsule**	m_capsules_won;
};

