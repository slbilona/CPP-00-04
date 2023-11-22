#include "Prototypes.hpp"

void erreurDeSaisie(const std::string& str, int i)
{
		if (std::cin.eof())
		{
			std::cout << "Fin de fichier détectée. Arrêt du programme." << std::endl;
            exit(0);
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (i)
			std::cout << "Erreur de saisie. Veuillez entrer un nombre valide.\n";
		std::cout << str << std::endl;

}

void add(int i, PhoneBook& repertoire)
{
	Contact contact;
	contact.index = i + 1;
	std::cout << "Quel est le PRENOM du contact ?\n";
	while(!(std::cin >> contact.Prenom))
		erreurDeSaisie("Quel est le NUMERO du contact ?", 0);
	std::cout << "Quel est le NOM du contact ?\n";
	while(!(std::cin >> contact.NomDeFamille))
		erreurDeSaisie("Quel est le NOM du contact ?", 0);
	std::cout << "Quel est le SURNOM du contact ?\n";
	while(!(std::cin >> contact.Surnom))
		erreurDeSaisie("Quel est le SURNOM du contact ?", 0);
	std::cout << "Quel est le NUMERO du contact ?\n";
	while(!(std::cin >> contact.NumeroDeTelephone))
		erreurDeSaisie("Quel est le NUMERO du contact ?", 1);
	while(!(std::cin >> contact.PlusLourdSecret))
		erreurDeSaisie("Quel est le PLUS LOURD SECRET du contact ?", 0);
	repertoire.contacts[i] = contact;
}