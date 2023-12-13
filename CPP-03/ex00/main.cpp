#include "ClapTrap.hpp"

int main()
{
    ClapTrap ilona("Ilona");

	ilona.attack("Elisa");
    ilona.takeDamage(5);
    ilona.beRepaired(2);
	ilona.attack("Elisa");
    ilona.takeDamage(8);
    return 0;
}
