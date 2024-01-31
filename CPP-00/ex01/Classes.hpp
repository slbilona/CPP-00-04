#include <iostream>
#include <cstring>
#include <limits>
#include <cstdlib>
#include <iomanip>
#include <string>

#include <string>

class Contact {
private:
	std::string	NumeroDeTelephone;
	std::string	Prenom;
	std::string	NomDeFamille;
	std::string	Surnom;
	std::string	PlusLourdSecret;
public:
	Contact();
	~Contact();
};

class PhoneBook {
public:
	Contact contacts[8];
	void add(int i, PhoneBook& repertoire);
	void search(PhoneBook& repertoire);
	void erreurDeSaisie(const std::string& str, int i);
};