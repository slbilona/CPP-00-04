#include "../includes/Animal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{

	// Animal *tabAnimal[100];
	// for (int i = 0; i < 50; i++)
	// {
	//     tabAnimal[i] = new Dog();
	// }
	// for (int i = 50; i < 100; i++)
	// {
	//     tabAnimal[i] = new Cat();
	// }
	// for (int i = 0; i < 100; i++)
	// {
	//     tabAnimal[i]->makeSound();
	// }
	// for (int i = 0; i < 100; i++)
	// {
	//     delete tabAnimal[i];
	// }

	Dog basic;
	{
		Dog tmp = basic;
		std::cout << tmp.getType() << std::endl;
	}

	// std::cout << "------------------- TEST 00 -------------------" << std::endl;
	// const Animal* meta = new Animal();
	// std::cout << "type : " << meta->getType() << std::endl;
	// meta->makeSound();
	// delete meta;
	// std::cout << "\n------------------- TEST 01 -------------------" << std::endl;
	// const Animal* j = new Dog();
	// std::cout << "type : " << j->getType() << " " << std::endl;
	// j->makeSound();
	// delete j;
	// std::cout << "\n------------------- TEST 02 -------------------" << std::endl;
	// const Animal* i = new Cat();
	// std::cout << "type : " << i->getType() << " " << std::endl;
	// i->makeSound();
	// delete i;
	// std::cout << "\n------------------- WRONGTEST -------------------" << std::endl;
	// const WrongAnimal *wrongAnimal = new WrongAnimal();
	// const WrongCat *wrongCat = new WrongCat();
	// std::cout << "type : " << wrongAnimal->getType() << " " << std::endl;
	// std::cout << "type : " << wrongCat->getType() << " " << std::endl;
	// wrongAnimal->makeSound();
	// wrongCat->makeSound();
	// delete wrongAnimal;
	// delete wrongCat;

	return 0;
}