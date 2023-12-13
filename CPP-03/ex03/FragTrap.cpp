#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
	hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& autre) : ClapTrap(autre)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = autre;
}

FragTrap& FragTrap::operator=(const FragTrap& autre)
{
	if (this != &autre)
	{
		this->name = autre.name;
		this->hitPoints = autre.hitPoints;
		this->energyPoints = autre.energyPoints;
		this->attackDamage = autre.attackDamage;
        std::cout << "FragTrap Assignment Operator called" << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requests a high five! ✋" << std::endl;
}
