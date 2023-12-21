#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private :
	Brain *brain;
public :
	Dog();
	Dog(const Dog& autre);
	Dog& operator=(const Dog& autre);
	~Dog();

	void makeSound() const;
};

#endif