#include "../includes/Animal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	std::cout << "\n------------- TEST 00 -------------" << std::endl;
	Animal *tabAnimal[100];
	for (int i = 0; i < 50; i++)
	{
	    tabAnimal[i] = new Dog();
	}
	for (int i = 50; i < 100; i++)
	{
	    tabAnimal[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
	    tabAnimal[i]->makeSound();
	}
	for (int i = 0; i < 100; i++)
	{
	    delete tabAnimal[i];
	}

	std::cout << "\n------------- TEST 01 -------------" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	return 0;
}