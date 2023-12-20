#if !defined(ICHARACTER_HPP)
#define ICHARACTER_HPP

class ICharacter
{
protected :
    std::string name;
public:
    ICharacter();
    ICharacter(const ICharacter& autre);
    ICharacter& operator=(const ICharacter& autre);
    virtual ~ICharacter() {}

    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};


#endif // ICHARACTER_HPP
