#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat : constructeur par default appelle" << std::endl;
}

Cat::Cat(const Cat& autre) : Animal()
{
	*this = autre;
	type = "Cat";
	std::cout << "Cat : constructeur de recopie appelle" << std::endl;
}

Cat& Cat::operator=(const Cat& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Cat : oerateur d'affectation appelle" << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat : destructeur par default appelle" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}