#include "../includes/Character.hpp"

Character::Character() : name("defaultName")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character : constructeur par default appelé" << std::endl;
}

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character : constructeur appelé" << std::endl;
}

Character::Character(const Character& autre)
{
	name = autre.name + "Copy";
	for (int i = 0; i < 4; i++)
	{
		if (autre.inventory[i] != NULL)
			this->inventory[i] = autre.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	std::cout << "Character : constructeur de recopie appelé" << std::endl;
}

Character& Character::operator=(const Character& autre)
{
	if (this != &autre)
	{
		this->name = autre.name;
		for (int i = 0; i < 4; i++)
        	if (this->inventory[i]) delete this->inventory[i];
		for (int i = 0; i < 4; i++)
        {
            if (autre.inventory[i] != NULL)
                this->inventory[i] = autre.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
        }
		std::cout << "Character : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
	{
        if (this->inventory[i]) delete this->inventory[i];
	}
	std::cout << "Character : destructeur par default appelé" << std::endl;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "le materia n'existe pas" << std::endl;
		return ;
	}
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << name << " s'est equipé de " << m->getType() << " a l'espace " << i << " de son inventaire"<< std::endl;
			return ;
		}
	}
	std::cout << "Inventaire plein" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "index invalid" << std::endl;
	else if (inventory[idx] == NULL)
		std::cout << "l'index " << idx << " de l'inventaire est vide" << std::endl;
	else
	{
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "index invalid" << std::endl;
	else if (inventory[idx] == NULL)
		std::cout << "l'index " << idx << " de l'inventaire est vide" << std::endl;
	else
	{
		std::cout << name << " utilise son " << inventory[idx]->getType() << " contre " << target.getName() << "." << std::endl;
		inventory[idx]->use(target);
	}
}

AMateria* Character::getMateria(int idx)
{
	return (this->inventory[idx]);
}