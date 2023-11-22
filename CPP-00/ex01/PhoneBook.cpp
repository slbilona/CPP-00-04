#include "Prototypes.hpp"

int main ()
{
	int i = 0;
	std::string str;
	std::string explications = "	\"ADD\"		pour ajouter un contact\n	\"SEARCH\"	pour recherher un contact existant\n	\"EXIT\"		pour quitter le répertoire (et perdre tout vos contacts)\n";	
	PhoneBook repertoire;
	for(;;)
	{
		std::cout << "Entree possible :\n" << explications << "Que souhaitez vous faire ?" << std::endl;
		std::cin >> str;
		if (str == "ADD")
			add(i, repertoire);
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
		std::cout << "nouveau contact : " << repertoire.contacts[i].Prenom << std::endl;
		std::cout << "\n-------------------------------------------------------------------------------------------\n\n";
		i++;
		if (i == 8)
			i = 0;
	}
	return 0;
}