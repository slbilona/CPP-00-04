#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		std::cout << "test 0 :\n" << std::endl;
		ScavTrap scavTrap("Guardian");
		FragTrap fragTrap("Destroyer");

		std::cout << "Initial Stats:" << std::endl;
		scavTrap.displayStats();
		fragTrap.displayStats();
		std::cout << std::endl;
		fragTrap.highFivesGuys();
		scavTrap.guardGate();

		while (scavTrap.getHitPoints() > 0 && fragTrap.getHitPoints() > 0)
		{
			scavTrap.attack("Destroyer");
			fragTrap.takeDamage(20);
			fragTrap.beRepaired(5);

			fragTrap.attack("Guardian");
			scavTrap.takeDamage(30);
			scavTrap.beRepaired(5);
		}

		scavTrap.displayStats();
		fragTrap.displayStats();
		if (scavTrap.getHitPoints() <= 0) {
			std::cout << "\nFragTrap Wins!" << std::endl;
		} else {
			std::cout << "\nScavTrap Wins!" << std::endl;
		}
		}
	{
		std::cout << "\n-------------------------------------------------\n" << std::endl;
		std::cout << "test 1 :\n" << std::endl;
		ScavTrap("ilona");
	}
	return 0;
}
