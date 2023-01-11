#include "GatchaMachine.h"
const int MAX_CAPSULES = 10;

/*-------------------------------------------------------------------------------*/
GatchaMachine::GatchaMachine()
	:
	m_theme(None),
	m_capsule_cost(0)
	{}
// {
// 	m_capsules = new Capsule* [MAX_CAPSULES];
// 	if (m_capsules == NULL)
// 	{
// 		std::cout << "Memory Error!" << std::endl;
// 	}
// }
/*-------------------------------------------------------------------------------*/
GatchaMachine::GatchaMachine(Series theme, int capsule_cost, std::vector<Capsule*> capsules, std::string color)
	:
    m_theme(theme),
	m_capsule_cost(capsule_cost),
	m_capsules(capsules),
	ShellColor(color)
	{}
/*-------------------------------------------------------------------------------*/
Capsule GatchaMachine::RollForFigure(int num)
{

}
/*-------------------------------------------------------------------------------*/
bool GatchaMachine::InsertCapsule(Capsule capsule)
{

}
/*-------------------------------------------------------------------------------*/
