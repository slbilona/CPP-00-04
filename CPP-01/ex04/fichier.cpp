#include "fichier.hpp"

int ouvertureFichier(const std::string& monFichier, const std::string& s1, const std::string& s2)
{
    // Création d'un objet ifstream pour lire le fichier
    std::ifstream fichier(monFichier.c_str());
    if (!fichier.is_open())
	{
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
        return 1;
    }
	std::cout << s1 << " " << s2 << std::endl;
	    // Fermer le fichier
    fichier.close();
	return (0);
}