#pragma once
#include "GatchaMachine.h"
class Player
{
public:
	Player(std::string name);
	~Player();
	void PlayMachine(GatchaMachine machine);
	int CalculateEarnings();
private:
	std::string				m_name;
	int						m_money;
	std::vector<Capsule*>	m_capsules_won;
};

