#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(const DiamondTrap& autre);
    DiamondTrap& operator=(const DiamondTrap& autre);
    ~DiamondTrap();
};

#endif