#include "../includes/AMateria.hpp"

AMateria::AMateria() : type("defaultType")
{
    std::cout << "AMateria : constructeur par default appelé" << std::endl;
}

AMateria::AMateria(const AMateria& autre) : type(autre.type)
{
    std::cout << "AMateria : constructeur de recopie appelé" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria : constructeur appelé" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& autre)
{
    if (this != &autre)
    {
        this->type = autre.type;
        std::cout << "AMateria : opérateur d'affectation appelé" << std::endl;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria : destructeur par default appelé" << std::endl;
}

//Returns the materia type
std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}
