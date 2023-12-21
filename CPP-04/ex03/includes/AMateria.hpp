#if !defined(AMATERIA_HPP)
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>
#include <ostream>

class ICharacter;

class AMateria
{
protected :
    std::string type;
public:
    AMateria();
    AMateria(const AMateria& autre);
    AMateria(std::string const & type);
    AMateria& operator=(const AMateria& autre);
    virtual ~AMateria();

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP
