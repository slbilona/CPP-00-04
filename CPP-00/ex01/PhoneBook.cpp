#include "Prototypes.hpp"

int main ()
{
	std::string str;
	std::string explications = "	\"ADD\"		pour ajouter un contact\n	\"SEARCH\"	pour recherher un contact existant\n	\"EXIT\"		pour quitter le répertoire (et perdre tout vos contacts)\n";	
	for(;;)
	{
		std::cout << "Entree possible :\n" << explications << "Que souhaitez vous faire ?" << std::endl;
		std::cin >> str;
		if (str == "ADD")
			add();
		else if (str == "SEARCH")
		{

		}
		else if (str == "EXIT")
		{
			return 0;
		}
		else
		{
			std::cout << "Entree non valable.\n";
		}
		std::cout << "\n-------------------------------------------------------------------------------------------\n\n";
	}
	return 0;
}