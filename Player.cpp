#include "Player.h"

/*-------------------------------------------------------------------------------*/
Player::Player(std::string name)
	:
	m_name(name),
	m_money(200) {}

/*-------------------------------------------------------------------------------*/
void Player::PlayMachine(GatchaMachine machine)
{
	int cost = machine.GetPrice();
	if (m_money > cost) m_money -= cost;
	else
	{
		std::cout << "Player dont have enough money to play this machine" << std::endl;
		return;
	}
	int num_of_capsules = machine.GetNumOfCapsules();
	if (num_of_capsules > 0)
	{
		srand(time(nullptr));
		// Generate a random number in the range 0 to the number of capsules in the machine
		int randNum = rand() % num_of_capsules;
		m_capsules_won.push_back(machine.RollForCapsule(randNum));
	}
	else
	{
		std::cout << "Machine is empty!" << std::endl;
		return;
	}
	std::cout << "Capsule purchased succesfully" << std::endl;
}
/*-------------------------------------------------------------------------------*/
int Player::CalculateEarnings()
{
	return 0;
}