#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), name(name)
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
	hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& autre) : ClapTrap(autre)
{
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = autre;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& autre)
{
	if (this != &autre)
	{
		this->name = autre.name;
		this->hitPoints = autre.hitPoints;
		this->energyPoints = autre.energyPoints;
		this->attackDamage = autre.attackDamage;
        std::cout << "DiamondTrap Assignment Operator called" << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}