#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice : constructeur par default appelé" << std::endl;
}

Ice::Ice(const Ice& autre) : AMateria(autre)
{
    std::cout << "Ice : constructeur de recopie appelé" << std::endl;
}

Ice& Ice::operator=(const Ice& autre)
{
    if (this != &autre)
    {
        AMateria::operator=(autre);
        std::cout << "Ice : opérateur d'affectation appelé" << std::endl;
    }
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice : destructeur par default appelé" << std::endl;
}


AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}
