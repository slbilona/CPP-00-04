#if !defined(IMATERIASOURCE_HPP)
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif // IMATERIASOURCE_HPP
