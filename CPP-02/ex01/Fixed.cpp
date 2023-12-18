#include "Fixed.hpp"
#include <cmath>

const int Fixed::nbBits = 8;

Fixed::Fixed() : valeur(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int valeur) : valeur(valeur << nbBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float valeur) : valeur(roundf(valeur * (1 << nbBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& autre)
{
	valeur = autre.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& autre)
{
	if (this != &autre)
	{
		this->valeur = autre.getRawBits();
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

int Fixed::getRawBits() const
{
	return this->valeur;
}

void Fixed::setRawBits(const int raw)
{
	this->valeur = raw;
}

float Fixed::toFloat() const
{
	return static_cast<float>(this->valeur) / (1 << nbBits);
}

int Fixed::toInt() const
{
	return this->valeur >> nbBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
