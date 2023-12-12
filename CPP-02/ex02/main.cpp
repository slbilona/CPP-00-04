#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
    const Fixed& maxResult = Fixed::max(a, b);
    std::cout << "Max: " << maxResult << std::endl;

    const Fixed& minResult = Fixed::min(a, b);  // Modification ici
    std::cout << "Min: " << minResult << std::endl;
	return 0;
}