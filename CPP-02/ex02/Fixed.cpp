#include "Fixed.hpp"
#include <cmath>
#include <algorithm>

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
	std::cout << "Copy constructor called" << std::endl;
	*this = autre;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& autre)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &autre)
		this->valeur = autre.getRawBits();
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

bool Fixed::operator>(const Fixed& autre) const
{
    return this->valeur > autre.valeur;
}

bool Fixed::operator<(const Fixed& autre) const
{
    return this->valeur < autre.valeur;
}

bool Fixed::operator>=(const Fixed& autre) const
{
    return this->valeur >= autre.valeur;
}

bool Fixed::operator<=(const Fixed& autre) const
{
    return this->valeur <= autre.valeur;
}

bool Fixed::operator==(const Fixed& autre) const
{
    return this->valeur == autre.valeur;
}

bool Fixed::operator!=(const Fixed& autre) const
{
    return this->valeur != autre.valeur;
}

Fixed Fixed::operator+(const Fixed& autre) const
{
    Fixed result;
    result.setRawBits(this->valeur + autre.valeur);
    return result;
}

Fixed Fixed::operator-(const Fixed& autre) const
{
    Fixed result;
    result.setRawBits(this->valeur - autre.valeur);
    return result;
}

Fixed Fixed::operator*(const Fixed& autre) const
{
    Fixed result;
    result.setRawBits((this->valeur * autre.valeur) >> nbBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& autre) const
{
    Fixed result;
    result.setRawBits((static_cast<int>((static_cast<long long>(this->valeur) << nbBits) / autre.valeur)));
    return result;
}

Fixed& Fixed::operator++()
{
    ++this->valeur;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--()
{
    --this->valeur;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    --(*this);
    return temp;
}

static Fixed& min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

static const Fixed& min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

static Fixed& max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

static const Fixed& max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}
