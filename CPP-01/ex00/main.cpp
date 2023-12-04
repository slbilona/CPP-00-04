#include "Zombie.hpp"

int main()
{
	Zombie *z1 = newZombie("Marzel");
	z1->announce();
	Zombie *z2 = newZombie("Smerald");
	z2->announce();
	Zombie *z3 = newZombie("Marcellus");
	z3->announce();
	randomChump("Lettice");
	randomChump("Mannus");
	randomChump("Melloney");
	delete z1;
	delete z2;
	delete z3;
}