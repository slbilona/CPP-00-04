#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>
#include <iostream>

class Fixed
{
private:
	int valeur;
	const static int nbBits = 8;
public:
	Fixed(); // constructeur
	Fixed(const Fixed& autre); // constructeur de copie
	Fixed(const int& entier); // constructeur de copi
	Fixed(const float& entier); // constructeur de copie
	~Fixed(); // destructeur
	Fixed& operator=(const Fixed& autre); // operateur d'affectation
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

#endif