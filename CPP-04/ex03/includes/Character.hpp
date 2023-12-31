#if !defined(CHARACTER_HPP)
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria* inventory[4];
public:
	Character();
	Character(std::string name);
	Character(const Character& autre);
	Character& operator=(const Character& autre);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	AMateria* getMateria(int idx);
};


#endif // CHARACTER_HPP
