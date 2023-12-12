#include "ClapTrap.hpp"

int main()
{
	std::string ilo = "Ilona";
	std::string eli = "Elisa";
	ClapTrap ilona(ilo);
    ClapTrap elisa(eli);

	ilona.attack(eli);
}
