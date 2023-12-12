#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {}

ClapTrap::~ClapTrap()
{
}


ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {}

ClapTrap::ClapTrap(const ClapTrap& autre)
{
	*this = autre;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& autre)
{
	if (this != &autre)
	{
		this->name = autre.name;
		this->hitPoints = autre.hitPoints;
		this->energyPoints = autre.energyPoints;
		this->attackDamage = autre.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << amount << std::endl;
}
