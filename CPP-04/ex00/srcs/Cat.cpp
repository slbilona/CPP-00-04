#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat : constructeur par défault appelé" << std::endl;
}

Cat::Cat(const Cat& autre) : Animal(autre)
{
	type = autre.type;
	std::cout << "Cat : constructeur de recopie appelé" << std::endl;
}

Cat& Cat::operator=(const Cat& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Cat : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat : destructeur par défault appelé" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}