#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat : constructeur par défault appelé" << std::endl;
}

Cat::Cat(const Cat& autre) : Animal(autre)
{
	type = autre.type;
	brain = new Brain(*autre.brain);
	std::cout << "Cat : constructeur de recopie appelé" << std::endl;
}

Cat& Cat::operator=(const Cat& autre)
{
	if (this != &autre)
	{
		this->type = autre.type;
		delete brain;
		this->brain = (autre.brain) ? new Brain(*autre.brain) : 0;
		std::cout << "Cat : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat : destructeur par défault appelé" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaou" << std::endl;
}