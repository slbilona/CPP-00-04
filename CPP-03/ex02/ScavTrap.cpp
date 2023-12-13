#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
	hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& autre) : ClapTrap(autre)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = autre;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& autre)
{
	if (this != &autre)
	{
		this->name = autre.name;
		this->hitPoints = autre.hitPoints;
		this->energyPoints = autre.energyPoints;
		this->attackDamage = autre.attackDamage;
        std::cout << "ScavTrap Assignment Operator called" << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints != 0 && hitPoints != 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " in a special way, causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else if (energyPoints == 0)
		std::cout << "ScavTrap " << name << " is out of Energy Points and cannot attack!" << std::endl;
	else
		std::cout << "ScavTrap " << name << " is out of Hit Points and cannot attack!" << std::endl;

}
