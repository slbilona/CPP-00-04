#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("defaultName"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& autre) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& autre)
{
	if (this != &autre)
	{
		this->name = autre.name;
		this->hitPoints = autre.hitPoints;
		this->energyPoints = autre.energyPoints;
		this->attackDamage = autre.attackDamage;
        std::cout << "ClapTrap Assignment Operator called" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints != 0 && hitPoints != 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else if (energyPoints == 0)
		std::cout << "ClapTrap " << name << " is out of Energy Points and cannot attack!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " is out of Hit Points and cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes a hit and suffers " << amount << " points of damage!" << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " died." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints != 0 && hitPoints != 0)
	{
		std::cout << "ClapTrap " << name << " is repaired, gaining " << amount << " hit points!" << std::endl;
		energyPoints--;
	}
	else if (energyPoints == 0)
		std::cout << "ClapTrap " << name << " is out of Energy Points and cannot be repaired!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " is out of Hit Points and cannot be repaired!" << std::endl;
}

void ClapTrap::displayStats() const
{
    std::cout << name << " Stats: " << "Hit Points: " << hitPoints << ", Energy Points: " << energyPoints << ", Attack Damage: " << attackDamage << std::endl;
}


int ClapTrap::getHitPoints()
{
	return (hitPoints);
}
