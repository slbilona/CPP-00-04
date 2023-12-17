#include "../includes/Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		ideas[i] = "brain";
	std::cout << "Brain : constructeur par défault appelé" << std::endl;
}

Brain::Brain(const Brain& autre)
{
	ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		ideas[i] = "brain";
	std::cout << "Brain : constructeur de recopie appelé" << std::endl;
}

Brain& Brain::operator=(const Brain& autre)
{
	if (this != &autre)
	{
		std::cout << "Brain : opérateur d'affectation appelé" << std::endl;
	}
	return (*this);
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "Brain : destructeur par défault appelé" << std::endl;
}