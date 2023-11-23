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
	std::cout << "Quel est le PLUS LOURD SECRET du contact ?\n";
	while(!(std::cin >> contact.PlusLourdSecret))
		erreurDeSaisie("Quel est le PLUS LOURD SECRET du contact ?", 0);
	repertoire.contacts[i] = contact;
}

void afficherNom(const char* str)
{
	std::string newStr(str);
	// Afficher le prénom en respectant les règles
	if (newStr.length() <= 10)
	{
		std::cout << std::setw(11) << std::right << newStr;
		std::cout << "|";
	}
	else
	{
		std::cout << std::setw(10) << std::right << newStr.substr(0, 9) << ".";
		std::cout << "|";
	}
}

void search(PhoneBook& repertoire)
{
	int index = 0;
	std::cout << std::setw(11) << std::right << "Index" << "|";
	std::cout << std::setw(11) << std::right << "Prenom" << "|";
	std::cout << std::setw(11) << std::right << "Nom" << "|";
	std::cout << std::setw(11) << std::right << "Surnom" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; ++i)
	{
		std::cout << std::setw(11) << std::right << i + 1 << "|";
		afficherNom(repertoire.contacts[i].Prenom);
		afficherNom(repertoire.contacts[i].NomDeFamille);
		afficherNom(repertoire.contacts[i].Surnom);
		std::cout << std::endl;
	}
	std::cout << "Quel est l'INDEX de la personne que vous souhaitez afficher ?\n";
	while(!(std::cin >> index))
		erreurDeSaisie("Quel est l'INDEX de la personne que vous souhaitez afficher ?", 1);
	int i = index - 1;
	std::cout << "Prenom :\t\t" << repertoire.contacts[i].Prenom << std::endl;
	std::cout << "Nom :\t\t\t" << repertoire.contacts[i].NomDeFamille << std::endl;
	std::cout << "Surnom :\t\t" << repertoire.contacts[i].Surnom << std::endl;
	std::cout << "Numero :\t\t" << repertoire.contacts[i].NumeroDeTelephone << std::endl;
	std::cout << "Plus lourd secret :\t" << repertoire.contacts[i].PlusLourdSecret << std::endl;
}