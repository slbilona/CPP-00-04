#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include "iostream"
#include "ostream"

class WrongAnimal
{
protected :
	std::string type;
public :
	WrongAnimal();
	WrongAnimal(const WrongAnimal& autre);
	WrongAnimal& operator=(const WrongAnimal& autre);
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif
