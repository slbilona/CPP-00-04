#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "------------------- TEST 00 -------------------" << std::endl;
    const Animal* meta = new Animal();
    std::cout << "type : " << meta->getType() << std::endl;
    meta->makeSound();
    delete meta;
    std::cout << "\n------------------- TEST 01 -------------------" << std::endl;
    const Animal* j = new Dog();
    std::cout << "type : " << j->getType() << " " << std::endl;
    j->makeSound();
    delete j;
    std::cout << "\n------------------- TEST 02 -------------------" << std::endl;
    const Animal* i = new Cat();
    std::cout << "type : " << i->getType() << " " << std::endl;
    i->makeSound();
    delete i;
    std::cout << "\n------------------- WRONGTEST -------------------" << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongCat *wrongCat = new WrongCat();
    std::cout << "type : " << wrongAnimal->getType() << " " << std::endl;
    std::cout << "type : " << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}