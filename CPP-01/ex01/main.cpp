#include "Zombie.hpp"

int main()
{
	int N(5);
	Zombie *horde = zombieHorde(N, "Smerald");
	delete[] horde;
	return 0;
}
