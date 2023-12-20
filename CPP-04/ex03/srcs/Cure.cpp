#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Cure : constructeur par default appelé" << std::endl;
}

Cure::Cure(const Cure& autre) : AMateria(autre)
{
    std::cout << "Cure : constructeur de recopie appelé" << std::endl;
}

Cure& Cure::operator=(const Cure& autre)
{
    if (this != &autre)
    {
        AMateria::operator=(autre);
        std::cout << "Cure : opérateur d'affectation appelé" << std::endl;
    }
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure : destructeur par default appelé" << std::endl;
}


AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.name << "’s wounds *" << std::endl;
}