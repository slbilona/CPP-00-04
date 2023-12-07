#include "fichier.hpp"

int ouvertureFichier(const std::string& monFichier, const std::string& s1, const std::string& s2)
{
	std::ifstream fichier(monFichier.c_str());
	if (!fichier.is_open())
	{
		std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
		return 1;
	}
	std::string nomNouvFichier = monFichier + ".replace";
	const char* nomNouvFichierCStr = nomNouvFichier.c_str();
	std::ofstream nouveauFichier(nomNouvFichierCStr);
	if (!nouveauFichier.is_open())
	{
		std::cerr << "Erreur lors de la création de \"" << nomNouvFichier << "\"." << std::endl;
		return 1;
	}
	ecritureNouveauFichier(fichier, nouveauFichier, s1, s2);
	fichier.close();
	nouveauFichier.close();
	return (0);
}

void ecritureNouveauFichier(std::ifstream& fichier, std::ofstream& nouveauFichier, const std::string& s1, const std::string& s2)
{
	size_t		position;
	std::string	ligne;

	while (std::getline(fichier, ligne))
	{
		position = ligne.find(s1);
		while (position != std::string::npos)
		{
			ligne.erase(position, s1.length());
			ligne.insert(position, s2);
			position = ligne.find(s1, position + s2.length());
		}
		nouveauFichier << ligne << std::endl;
	}
}