#include "Fixed.hpp"
#include <cmath>
#include <algorithm>

const int Fixed::nbBits = 8;

Fixed::Fixed() : valeur(0) {}

Fixed::Fixed(const int valeur) : valeur(valeur << nbBits) {}

Fixed::Fixed(const float valeur) : valeur(roundf(valeur * (1 << nbBits))) {}

Fixed::Fixed(const Fixed& autre)
{
	valeur = autre.valeur;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& autre)
{
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

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b) ? a : b;
}