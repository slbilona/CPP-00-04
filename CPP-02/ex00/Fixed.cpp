#include "Fixed.hpp"

const int Fixed::nbBits = 8;

Fixed::Fixed() : valeur(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& autre)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = autre;
}

Fixed& Fixed::operator=(const Fixed& autre)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &autre)
	{
        this->valeur = autre.valeur;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->valeur;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->valeur = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.getRawBits();
    return os;
}
