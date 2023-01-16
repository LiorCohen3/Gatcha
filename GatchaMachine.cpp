#include "GatchaMachine.h"
const int MAX_CAPSULES = 10;

/*-------------------------------------------------------------------------------*/
GatchaMachine::GatchaMachine()
	:
	m_theme(None),
	m_capsule_cost(0)
	{}

/*-------------------------------------------------------------------------------*/
GatchaMachine::GatchaMachine(Series theme, int capsule_cost, std::vector<Capsule*> capsules, std::string color)
	:
    m_theme(theme),
	m_capsule_cost(capsule_cost),
	m_capsules(capsules),
	ShellColor(color)
	{}

/*-------------------------------------------------------------------------------*/
int GatchaMachine::RollForCapsule(int num)
{

}

/*-------------------------------------------------------------------------------*/
bool GatchaMachine::InsertCapsule(Capsule* capsule)
{
	if (capsule == NULL) return false;
	if (m_capsules.size() < MAX_CAPSULES)
	{
		m_capsules.push_back(capsule);
		std::cout << "Capsule added succefully" << std::endl;
		return true;
	}
	else
	{
		m_extra_capsules.push_back(capsule);
		std::cout << "Capsule added to extra" << std::endl;
		return false;
	}
}

/*-------------------------------------------------------------------------------*/
void GatchaMachine::InsertCapsuleFromExtra(Capsule* capsule)
{
	for (int i = 0; i < MAX_CAPSULES; i++)
	{
		if (m_capsules[i]->GetRarity() < Epic)
		{
			m_capsules[i] = capsule;
			return;
		}
	}
}

/*-------------------------------------------------------------------------------*/
void GatchaMachine::AddEpicsFromExtra(int num) 
{
	for (int i = 0; i < m_extra_capsules.size(); i++)
	{
		Capsule* current_capsule = m_extra_capsules[i];
		Rarity curr_capsule_rarity = current_capsule->GetRarity();
		if (curr_capsule_rarity == Epic)
		{
			InsertCapsuleFromExtra(current_capsule);
			num++;
		}
		if (num == 2) return;
	}
	std::cout << "There are not enough epics in extras" << std::endl;
}

/*-------------------------------------------------------------------------------*/
void GatchaMachine::AddLegendarysFromExtra() 
{
	for (int i = 0; i < m_extra_capsules.size(); i++)
	{
		Capsule* current_capsule = m_extra_capsules[i];
		Rarity curr_capsule_rarity = current_capsule->GetRarity();
		if (curr_capsule_rarity == Legendary)
		{
			InsertCapsuleFromExtra(current_capsule);
			return;
		}
	}
	std::cout << "There are no legendaries in extras" << std::endl;
}