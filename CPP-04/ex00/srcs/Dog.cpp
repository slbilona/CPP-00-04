#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog : constructeur par défault appelé" << std::endl;
}

Dog::Dog(const Dog& autre) : Animal(autre)
{
	type = "Dog";
	std::cout << "Dog : constructeur de recopie appelé" << std::endl;
}

Dog& Dog::operator=(const Dog& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Dog : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog : destructeur par défault appelé" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}