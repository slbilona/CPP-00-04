#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie nouveau(name);
	nouveau.announce();
}
