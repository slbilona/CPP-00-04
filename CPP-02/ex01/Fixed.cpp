#include "Fixed.hpp"

Fixed::Fixed() : valeur(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& autre) : valeur(autre.valeur)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& autre)
{
    if (this != &autre) {
        valeur = autre.valeur;
    }
    return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return valeur;
}

void Fixed::setRawBits( int const raw )
{
	valeur = raw;
}

float Fixed::toFloat( void ) const
{
	valeur = std::atof(valeur);
}

int Fixed::toInt( void ) const
{

}
