#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int                 valeur;
    static const int    nbBits;

public:
    Fixed();
    Fixed(const int valeur);
    Fixed(const float valeur);
    Fixed(const Fixed& autre);
    Fixed& operator=(const Fixed& autre);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(const int raw);
    float toFloat() const;
    int toInt() const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
