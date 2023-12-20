#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& autre);
    ScavTrap& operator=(const ScavTrap& autre);
    ~ScavTrap();

    void guardGate();
    void attack(const std::string& target);
};


#endif