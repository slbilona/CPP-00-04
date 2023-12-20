#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "iostream"
#include "ostream"
#include "Brain.hpp"

class Animal
{
protected :
	std::string type;
	Animal();
	Animal(const Animal& autre);
	Animal& operator=(const Animal& autre);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif