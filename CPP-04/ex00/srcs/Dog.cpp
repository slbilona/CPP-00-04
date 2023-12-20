#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog : constructeur par default appelé" << std::endl;
}

Dog::Dog(const Dog& autre) : Animal(autre)
{
	type = autre.type;
	std::cout << "Dog : constructeur de recopie appelé" << std::endl;
}

Dog& Dog::operator=(const Dog& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Dog : operateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog : destructeur par default appelé" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}