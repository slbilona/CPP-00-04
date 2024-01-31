#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : name("") // Constructeur : initialisation de la variable name a NULL
{
	std::cout << "Constructeur par default" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " a bien ete detruit." << std::endl;
}

void	Zombie::newName(std::string newName)
{
	name = newName;
}