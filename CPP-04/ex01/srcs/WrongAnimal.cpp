#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal : constructeur par default appelle" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& autre)
{
	type = autre.type;
	std::cout << "WrongAnimal : constructeur de recopie appelle" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "WrongAnimal : oerateur d'affectation appelle" << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : destructeur par default appelle" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "meuh" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
