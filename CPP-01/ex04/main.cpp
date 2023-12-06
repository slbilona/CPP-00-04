#include "fichier.hpp"

int main(int argc, char const *argv[])
{
	if (argc > 4)
		std::cout << "trop d'arguments" << std::endl;
	else if (argc < 4)
		std::cout << "pas assez d'arguments" << std::endl;
	else
		ouvertureFichier(argv[1], argv[2], argv[3]);
	return 0;
}
