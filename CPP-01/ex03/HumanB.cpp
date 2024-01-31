#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name) {}

HumanB::~HumanB() {}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << arme->getType() << std::endl;
}

//arme est un pointeur sur weapon
void HumanB::setWeapon(Weapon& weapon)
{
	arme = &weapon;
}