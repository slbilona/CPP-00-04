#include "Harl.hpp"

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		std::string level = "RIEN";
		Harl monHarl;
		monHarl.complain(level);
	}
	else if (argc > 2)
		std::cout << "trop d'arguments" << std::endl;
	else
	{
		std::string level(argv[1]);
		Harl monHarl;
		monHarl.complain(level);
	}
	return 0;
}
