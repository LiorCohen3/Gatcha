#pragma once
#include "GatchaMachine.h"
#include "Toy.h"
#include "Candy.h"

class Player
{
public:
	Player(std::string name);
	~Player() {}
	void PlayMachine(GatchaMachine machine);
	int CalculateEarnings();
	int GetMoney() { return m_money; }
private:
	std::string				m_name;
	int						m_money;
	std::vector<Capsule*>	m_capsules_won;
};

