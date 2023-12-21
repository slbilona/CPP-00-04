#include "../includes/Character.hpp"

Character::Character() : name("defaultName")
{
	std::cout << "Character : constructeur par default appelé" << std::endl;
}

Character::Character(std::string name) : name(name)
{
	std::cout << "Character : constructeur appelé" << std::endl;
}

Character::Character(const Character& autre)
{
	name = autre.name;
	std::cout << "Character : constructeur de recopie appelé" << std::endl;
}

Character& Character::operator=(const Character& autre)
{
	if (this != &autre)
	{
		this->name = autre.name;
		std::cout << "Character : opérateur d'affectation appelé" << std::endl;
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character : destructeur par default appelé" << std::endl;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while(i < 4)
	{
		if (inventory[i] != NULL)
		{
			inventory[i] = m;
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
		inventory[idx] = NULL;
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
