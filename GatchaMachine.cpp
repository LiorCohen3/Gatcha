#include "GatchaMachine.h"
const int MAX_CAPSULES = 10;

/*-------------------------------------------------------------------------------*/
GatchaMachine::GatchaMachine()
	:
	m_color("None"),
	m_theme(None),
	m_capsule_cost(0)
{
	m_capsules = new Capsule* [MAX_CAPSULES];
	if (m_capsules == NULL)
	{
		std::cout << "Memory Error!" << std::endl;
	}
}
