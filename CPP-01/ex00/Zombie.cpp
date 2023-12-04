#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie (std::string name) : name(name)
{
	return ;
}

Zombie::Zombie() : name("NULL") // Constructeur : initialisation de la variable name a NULL
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << name << " a bien ete detruit." << std::endl;
}