#include "../includes/Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain& autre)
{
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = autre.ideas[i];
    }
	std::cout << "Brain : constructeur de recopie appelle" << std::endl;
}

Brain& Brain::operator=(const Brain& autre)
{
    if (this != &autre)
    {
        for (int i = 0; i < 100; i++)
        {
            ideas[i] = autre.ideas[i];
        }
		std::cout << "Animal : operateur d'affectation appelle" << std::endl;
    }
    return (*this);
}


Brain::~Brain() {}