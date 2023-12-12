#include "Fixed.hpp"

int main( void )
{
	{
		std::cout << "sujet :\n" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << "\n\nautres tests :\n" << std::endl;
		Fixed a(5.5f);
		Fixed b(2.2f);

		// Affichage des valeurs initiales
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;

		// Utilisation des opérateurs arithmétiques
		Fixed sum = a + b;
		Fixed difference = a - b;
		Fixed product = a * b;
		Fixed quotient = a / b;

		std::cout << "Sum: " << sum << std::endl;
		std::cout << "Difference: " << difference << std::endl;
		std::cout << "Product: " << product << std::endl;
		std::cout << "Quotient: " << quotient << std::endl;

		// Utilisation des opérateurs de comparaison
		std::cout << "a > b: " << (a > b) << std::endl;
		std::cout << "a < b: " << (a < b) << std::endl;
		std::cout << "a >= b: " << (a >= b) << std::endl;
		std::cout << "a <= b: " << (a <= b) << std::endl;
		std::cout << "a == b: " << (a == b) << std::endl;
		std::cout << "a != b: " << (a != b) << std::endl;

		// Utilisation des opérateurs d'incrémentation et décrémentation
		++a;
		std::cout << "a after pre-increment: " << a << std::endl;

		Fixed postIncrement = a++;
		std::cout << "a after post-increment: " << a << std::endl;
		std::cout << "postIncrement: " << postIncrement << std::endl;

		--b;
		std::cout << "b after pre-decrement: " << b << std::endl;

		Fixed postDecrement = b--;
		std::cout << "b after post-decrement: " << b << std::endl;
		std::cout << "postDecrement: " << postDecrement << std::endl;

		// Utilisation des fonctions min et max
		Fixed minResult = Fixed::min(a, b);
		Fixed maxResult = Fixed::max(a, b);

		std::cout << "Min: " << minResult << std::endl;
		std::cout << "Max: " << maxResult << std::endl;
	}
	return 0;
}
