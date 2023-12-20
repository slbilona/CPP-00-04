#include "../includes/Animal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

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
    const Animal* i = new Cat;
    const Animal* ptrA = i;
    std::cout << "type : " << i->getType() << " " << std::endl;
    i->makeSound();
    ptrA->makeSound();
    delete i;
    std::cout << "\n------------------- WRONGTEST -------------------" << std::endl;
    WrongAnimal *wrongAnimal = new WrongAnimal;
    WrongCat *wrongCat = new WrongCat;
    WrongAnimal* ptrWA = wrongCat;
    std::cout << "type : " << wrongAnimal->getType() << " " << std::endl;
    std::cout << "type : " << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
    wrongCat->makeSound();
    ptrWA->makeSound();
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}