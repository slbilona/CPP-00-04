#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal : constructeur par default appelle" << std::endl;
}

Animal::Animal(const Animal& autre) : type("Animal")
{
	*this = autre;
	std::cout << "Animal : constructeur de recopie appelle" << std::endl;
}

Animal& Animal::operator=(const Animal& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Animal : operateur d'affectation appelle" << std::endl;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal : destructeur par default appelle" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Je suis un animal non identifie" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
