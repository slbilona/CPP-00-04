#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat : constructeur par default appelle" << std::endl;
}

WrongCat::WrongCat(const WrongCat& autre) : WrongAnimal()
{
	*this = autre;
	type = "WrongCat";
	std::cout << "WrongCat : constructeur de recopie appelle" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "WrongCat : oerateur d'affectation appelle" << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : destructeur par default appelle" << std::endl;
}
