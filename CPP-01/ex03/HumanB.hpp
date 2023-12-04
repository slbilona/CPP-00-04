#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <ostream>
#include <iostream>

class HumanB
{
private:
    Weapon* arme; //pointeur sur weapon
    std::string name;
public:
    HumanB(std::string _name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weapon);
};

#endif