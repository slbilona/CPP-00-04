#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat : constructeur par défault appelé" << std::endl;
}

WrongCat::WrongCat(const WrongCat& autre) : WrongAnimal(autre)
{
	type = autre.type;
	std::cout << "WrongCat : constructeur de recopie appelé" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "WrongCat : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : destructeur par défault appelé" << std::endl;
}
