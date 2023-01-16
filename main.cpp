#include "Player.h"
const int MAX_MACHINES = 10;
const int MAX_CAPSULES = 100;

void SortCapsulesToMachines(GatchaMachine* machines, Capsule* capsules)
{
	for (int i = 0; i < MAX_MACHINES; i++)
	{
		Series current_machine_theme = machines[i].GetTheme();
		std::string current_machine_color = machines[i].GetColor();
		int num_of_epics = 0, num_of_legend = 0;
		for (int j = 0; j < MAX_CAPSULES; j++)
		{
			CapType curr_capsule_type = capsules[j].GetType();
			Rarity curr_capsule_rarity = capsules[j].GetRarity();
			if (curr_capsule_type == _Candy)
			{
				if (current_machine_color == capsules[j].GetColor())
				{
					if (machines[i].InsertCapsule(&capsules[j]))
					{
						if (curr_capsule_rarity == Legendary)
						{
							num_of_legend++;
						}
						else if (curr_capsule_rarity == Epic)
						{
							num_of_epics++;
						}
					}
				}
			}
			if (curr_capsule_type == _Toy)
			{
				if (current_machine_theme == static_cast<Toy*>(&capsules[j])->GetCategory())
				{
					if (machines[i].InsertCapsule(&capsules[j]))
					{
						if (curr_capsule_rarity == Legendary)
						{
							num_of_legend++;
						}
						else if (curr_capsule_rarity == Epic)
						{
							num_of_epics++;
						}
					}
				}
			}
		}
		if (num_of_epics < 2)
		{
			machines[i].AddEpicsFromExtra(num_of_epics);
		}
		if (num_of_legend < 1)
		{
			machines[i].AddLegendarysFromExtra();
		}
		machines[i].DeleteExtras();
	}
}

int main()
{
	Player player("Eliya");
	GatchaMachine machine_array[MAX_MACHINES];

	int choose = 0;
	while (true)
	{
		std::cout << "\n-----------MENU:-----------\n"
			<< "\t1-Exit\n";
		int counter = 2;
		for (GatchaMachine machine : machine_array)
		{
			if (machine.GetTheme() != None)
			{
				std::cout << counter << "-" << machine.GetTheme() << "Price:" << machine.GetPrice() << std::endl;
			}
			counter++;
		}
		std::cin >> choose;
		if (choose == 1) return 0;
		else if (choose < counter || choose > 0)
		{
			player.PlayMachine(machine_array[choose - 2]);
		}
		else std::cout << "Invalid input. Please try again" << std::endl;
	}
	return 0;

}