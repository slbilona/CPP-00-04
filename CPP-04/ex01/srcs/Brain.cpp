#include "../includes/Brain.hpp"

Brain::Brain() : ideas(new std::string[100])
{
	std::cout << "Brain : constructeur par défaut appelé" << std::endl;
}

Brain::Brain(const Brain &autre) : ideas(new std::string[100])
{
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = autre.ideas[i];
	}
	std::cout << "Brain : constructeur de copie appelé" << std::endl;
}

Brain& Brain::operator=(const Brain &autre)
{
	if (this != &autre)
	{
		delete[] ideas; // libérer la mémoire précédemment allouée

		ideas = new std::string[100];
		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = autre.ideas[i];
		}

		std::cout << "Brain : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Brain::~Brain()
{
	delete[] ideas;
	std::cout << "Brain : destructeur appelé" << std::endl;
}