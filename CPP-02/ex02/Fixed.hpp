#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					valeur;
	static const int	nbBits;

public:
	Fixed();
	Fixed(const int valeur);
	Fixed(const float valeur);
	Fixed(const Fixed& autre);
	~Fixed();

	Fixed& operator=(const Fixed& autre);

	int getRawBits() const;
	void setRawBits(const int raw);

	float toFloat() const;
	int toInt() const;

	bool operator>(const Fixed& autre) const;
	bool operator<(const Fixed& autre) const;
	bool operator>=(const Fixed& autre) const;
	bool operator<=(const Fixed& autre) const;
	bool operator==(const Fixed& autre) const;
	bool operator!=(const Fixed& autre) const;

	Fixed operator+(const Fixed& autre) const;
	Fixed operator-(const Fixed& autre) const;
	Fixed operator*(const Fixed& autre) const;
	Fixed operator/(const Fixed& autre) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
