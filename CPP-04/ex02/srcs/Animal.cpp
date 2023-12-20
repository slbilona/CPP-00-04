#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal : constructeur par défault appelé" << std::endl;
}

Animal::Animal(const Animal& autre)
{
	type = autre.type;
	std::cout << "Animal : constructeur de recopie appelé" << std::endl;
}

Animal& Animal::operator=(const Animal& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Animal : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal : destructeur par défault appelé" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
