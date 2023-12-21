#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "MateriaSource : constructeur par default appelé" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& autre)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = autre.inventory[i];
	std::cout << "MateriaSource : constructeur de recopie appelé" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& autre)
{
	if (this != &autre)
	{
		for (int i = 0; i < 4; i++)
			inventory[i] = autre.inventory[i];
		std::cout << "MateriaSource : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (inventory[i]) delete inventory[i];
	std::cout << "MateriaSource : destructeur par default appelé" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == NULL)
		{
			std::cout << "Materia source learned " << materia->getType() << std::endl;
			inventory[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
	{
        if (inventory[i] != NULL && inventory[i]->getType() == type)
		{
			std::cout << "Materia source creates " << type << std::endl;
            return inventory[i]->clone();
		}
    }
    return NULL;
}
