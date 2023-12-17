#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog : constructeur par default appelle" << std::endl;
}

Dog::Dog(const Dog& autre) : Animal(autre)
{
	std::cout << "Dog : constructeur de recopie appelle" << std::endl;
}

Dog& Dog::operator=(const Dog& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Dog : operateur d'affectation appelle" << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog : destructeur par default appelle" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}