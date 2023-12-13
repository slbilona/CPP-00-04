#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& autre);
    FragTrap& operator=(const FragTrap& autre);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif