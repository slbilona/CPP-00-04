#include "Fixed.hpp"

int main( void )
{
	{
		std::cout << "--------------- sujet ---------------" << std::endl;
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
		std::cout << "\n--------------- Autres tests ---------------" << std::endl;

		Fixed a(5.5f);
		Fixed b(2.2f);

		std::cout << "\nAffichage des valeurs initiales :" << std::endl;
		std::cout << "a : " << a << std::endl;
		std::cout << "b : " << b << std::endl;

		std::cout << "\nOpérateurs arithmétiques :" << std::endl;
		Fixed somme = a + b;
		Fixed différence = a - b;
		Fixed produit = a * b;
		Fixed quotient = a / b;

		std::cout << "a + b : " << somme << std::endl;
		std::cout << "a - b : " << différence << std::endl;
		std::cout << "a * b : " << produit << std::endl;
		std::cout << "a / b : " << quotient << std::endl;

		std::cout << "\nOpérateurs de comparaison :" << std::endl;
		std::cout << "a > b : " << (a > b) << std::endl;
		std::cout << "a < b : " << (a < b) << std::endl;
		std::cout << "a >= b : " << (a >= b) << std::endl;
		std::cout << "a <= b : " << (a <= b) << std::endl;
		std::cout << "a == b : " << (a == b) << std::endl;
		std::cout << "a != b : " << (a != b) << std::endl;

		std::cout << "\nOpérateurs d'incrémentation et décrémentation :" << std::endl;
		++a;
		std::cout << "a après pré-incrémentation : " << a << std::endl;

		Fixed postIncrément = a++;
		std::cout << "a après post-incrémentation : " << a << std::endl;
		std::cout << "postIncrément : " << postIncrément << std::endl;

		--b;
		std::cout << "b après pré-décrémentation : " << b << std::endl;

		Fixed postDécrément = b--;
		std::cout << "b après post-décrémentation : " << b << std::endl;
		std::cout << "postDécrément : " << postDécrément << std::endl;

		std::cout << "\nMin et Max :" << std::endl;
		Fixed résultatMin = Fixed::min(a, b);
		Fixed résultatMax = Fixed::max(a, b);

		std::cout << "Min : " << résultatMin << std::endl;
		std::cout << "Max : " << résultatMax << std::endl;
	}
	return 0;
}
