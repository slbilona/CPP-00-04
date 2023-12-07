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
	~Fixed(); // destructeur
	Fixed& operator=(const Fixed& autre); // operateur d'affectation
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif