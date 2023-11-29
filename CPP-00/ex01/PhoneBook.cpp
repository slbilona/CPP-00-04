//#include "Prototypes.hpp"
#include "Classes.hpp"

int main ()
{
	int i = 0;
	std::string str;
	std::string explications = "	\"ADD\"		pour ajouter un contact\n	\"SEARCH\"	pour recherher un contact existant\n	\"EXIT\"		pour quitter le répertoire (et perdre tout vos contacts)\n";	
	PhoneBook repertoire;
			std::cout << "\n----------------------------🌷-📞-🌷----------------------------\n\n";
	for(;;)
	{
		std::cout << "Entrees possible :\n" << explications << "Que souhaitez vous faire ?" << std::endl;
		if(std::cin >> str)
		{
			if (str == "ADD")
			{
				repertoire.add(i, repertoire);
				i++;
				if (i == 8)
				i = 0;
			}
			else if (str == "SEARCH")
			{
				repertoire.search(repertoire);
			}
			else if (str == "EXIT")
			{
				return 0;
			}
			else
			{
				std::cout << "Entree non valable.\n";
			}
		}
		else
			repertoire.erreurDeSaisie("NULL", 0);
		std::cout << "\n----------------------------🌷-📞-🌷----------------------------\n\n";
	}
	return 0;
}