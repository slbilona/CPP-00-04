#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& autre);
    DiamondTrap& operator=(const DiamondTrap& autre);
    ~DiamondTrap();
    ClapTrap::name(std::string name_clap_name);
};

#endif