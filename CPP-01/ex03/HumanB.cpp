#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
	return ;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	const std::string& typeREF = arme->getType();
	std::cout << name << " attacks with their " << typeREF << std::endl;
}

//arme est un pointeur sur weapon
void HumanB::setWeapon(Weapon& weapon)
{
	arme = &weapon;
}