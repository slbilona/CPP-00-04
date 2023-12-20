#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name)
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
	hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& autre)
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

void DiamondTrap::whoAmI()
{
	std::cout << "my name is : " << this->name << " and my ClapTrap name is : " << "." << std::endl;
}
