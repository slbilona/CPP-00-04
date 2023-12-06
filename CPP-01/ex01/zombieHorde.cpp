#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
	{
		std::cerr << "Impossible d'allouer un nombre inferieur a 0 de zombies" << std::endl;
		return NULL;
	}
	Zombie *horde = new Zombie[N];
	if (horde != NULL)
	{
		for(int i = 0; i < N; i++)
		{
			horde[i].newName(name);
			horde[i].announce();
		}
		return (horde);
	}
	std::cerr << "Erreur d'allocation de mémoire." << std::endl;
	return NULL;
}
