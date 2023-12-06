#ifndef FICHIER_HPP
#define FICHIER_HPP

#include <iostream>
#include <ostream>
#include <fstream>
#include <string>

int ouvertureFichier(const std::string& fichier, const std::string& s1, const std::string& s2);
void ecritureNouveauFichier(std::ifstream& fichier, std::ofstream& nouveauFichier, const std::string& s1, const std::string& s2);

#endif