#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& uneArme) : arme(uneArme), name(_name)
{
    return ;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << arme.getType() << std::endl;
}
