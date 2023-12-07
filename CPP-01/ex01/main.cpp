#include "Zombie.hpp"

int main()
{
	{
		std::cout << "\ntest 1" << std::endl;
		int N(-5);
		Zombie *horde = zombieHorde(N, "Smerald");
		if (horde)
		{
			for(int i = 0; i < N; i++)
				horde[i].announce();
			delete[] horde;	
		}
	}
	{
		std::cout << "\ntest 2" << std::endl;
		int N(5);
		Zombie *horde = zombieHorde(N, "Smerald");
		if (horde)
		{
			for(int i = 0; i < N; i++)
				horde[i].announce();
			delete[] horde;	
		}
	}
	{
		std::cout << "\ntest 3" << std::endl;
		int N(100);
		Zombie *horde = zombieHorde(N, "Smerald");
		if (horde)
		{
			for(int i = 0; i < N; i++)
				horde[i].announce();
			delete[] horde;	
		}
	}
	return 0;
}
