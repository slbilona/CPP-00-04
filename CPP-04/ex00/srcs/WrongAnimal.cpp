#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal : constructeur par défault appelé" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& autre) : type("WrongAnimal")
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal : constructeur de recopie appelé" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "WrongAnimal : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : destructeur par défault appelé" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "meuh" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
