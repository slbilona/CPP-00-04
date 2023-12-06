#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
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
