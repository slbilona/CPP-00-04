#if !defined(MATERIASOURCE_HPP)
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* inventory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& autre);
	MateriaSource& operator=(const MateriaSource& autre);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP
