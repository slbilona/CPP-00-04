#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : name("NULL") // Constructeur : initialisation de la variable name a NULL
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << name << " a bien ete detruit." << std::endl;
}

void	Zombie::newName(std::string newName)
{
	name = newName;
}