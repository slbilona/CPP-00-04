#if !defined(CURE_HPP)
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure& autre);
    Cure& operator=(const Cure& autre);
    ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif // CURE_HPP
