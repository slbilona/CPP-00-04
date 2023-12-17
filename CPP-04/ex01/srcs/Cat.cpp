#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat : constructeur par default appelle" << std::endl;
}

Cat::Cat(const Cat& autre) : Animal(autre)
{
	std::cout << "Cat : constructeur de recopie appelle" << std::endl;
}

Cat& Cat::operator=(const Cat& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		std::cout << "Cat : operateur d'affectation appelle" << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat : destructeur par default appelle" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}