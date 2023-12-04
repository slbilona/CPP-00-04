#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <ostream>
#include <iostream>

class HumanA
{
private:
    Weapon& arme; // reference sur weapon
    std::string name;
public:
    HumanA(std::string _name, Weapon& uneArme);
    ~HumanA();
    void attack();
};

#endif