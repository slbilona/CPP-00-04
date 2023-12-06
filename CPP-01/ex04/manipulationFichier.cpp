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

    //creer le nouveau fichier
    std::string nomNouvFichier = monFichier + ".replace";
	std::ofstream nouveauFichier(nomNouvFichier);

    // Vérification si la création du fichier a réussi
    if (!nouveauFichier.is_open()) {
        std::cerr << "Erreur lors de la création du nouveauFichier." << std::endl;
        return 1; // Quitter le programme avec un code d'erreur
    }

    // Écrire du texte dans le fichier
    nouveauFichier << "Contenu du nouveau fichier." << std::endl;

    // Fermer le fichier
    nouveauFichier.close();
    fichier.close();
	return (0);
}