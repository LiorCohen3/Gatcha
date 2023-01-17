#include "Player.h"
const int MAX_MONEY = 200;
/*-------------------------------------------------------------------------------*/
Player::Player(std::string name)
	:
	m_name(name),
	m_invested_money(0),
	m_money(MAX_MONEY) {}
/*-------------------------------------------------------------------------------*/
void Player::PlayMachine(GatchaMachine machine)
{
	// Checks that the player can play the machine
	int cost = machine.GetPrice();
	if (m_money > cost)	// player can play
	{ 
		m_money -= cost;
		m_invested_money+= cost;
	}
	else // player can't play
	{
		std::cout << "Player dont have enough money to play this machine" << std::endl;
		return;
	}
	
	// Checks that there are enough capsules in the machine to play
	int num_of_capsules = machine.GetNumOfCapsules();
	if (num_of_capsules > 0)
	{
		srand(time(nullptr));
		// Generate a random number in the range 0 to the number of capsules in the machine
		int randNum = rand() % num_of_capsules;
		Capsule* win_capsul = machine.RollForCapsule(randNum);
		m_capsules_won.push_back(win_capsul);
		int won_price = CalculateAward(win_capsul, machine);
		std:: cout << "The value of the prize you won is "<< won_price <<std::endl;
		m_won_money+= won_price;
	}
	else
	{
		std::cout << "Machine is empty!" << std::endl;
		return;
	}
	std::cout << "Capsule purchased succesfully" << std::endl;
}
/*-------------------------------------------------------------------------------*/
void Player::PrintWonCap()
{
	cout << "Capsules I won:"<<endl<<endl;;

	for (int i = 0; i < m_capsules_won.size(); i++)
	{
		cout << i+1 << ") "<< "name: " << m_capsules_won[i]->GetName() << endl;
		if (m_capsules_won[i]->GetType() == _Toy)
		{
			cout << "Type: " << m_capsules_won[i]->GetType() << endl;
		}
		else if (m_capsules_won[i]->GetType() == _Candy)
		{
			string flavor = static_cast<Candy*>(m_capsules_won[i]->GetFlavor());
			cout << "Flavor: " << flavor << endl;
		}
		cout << endl;
	}
	
}
/*-------------------------------------------------------------------------------*/
int Player:: CalculateAward(Capsule* win_cap, GatchaMachine machine)
{
	Rarity rarity = win_cap->GetRarity();
	int machine_price = machine.GetPrice();
	int award =0;

	switch (rarity)
	{
	case Common:
		award = (1/4)*machine_price;
		break;
	case Rare:
		award = (1/2)*machine_price;
		break;
	case Epic:
		award = machine_price;
		break;
	case Legendary:
		award = (1.5)*machine_price;
		break;
	}

	return award;
}
/*-------------------------------------------------------------------------------*/
void Player::CalculateEarnings()
{
	PrintWonCap();

	if (m_won_money > m_invested_money)
	{
		cout <<  GetPlayerName() << " earned " << m_won_money << endl;
	}
	else if (m_won_money <= m_invested_money)
	{
		cout <<  GetPlayerName() << " lost " << m_invested_money << endl;
	}
}
/*-------------------------------------------------------------------------------*/