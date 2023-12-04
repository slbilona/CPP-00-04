#include <string.h>
#include <iostream>
#include <ostream>

int main()
{
    std::string myString = "HI THIS IS BRAIN";
    std::string* stringPTR = &myString;
    std::string& stringREF = myString;

    std::cout << "Adresse de la string en mémoire : " << (void*)&myString << std::endl;
    std::cout << "Adresse stockée dans stringPTR : " << (void*)stringPTR << std::endl;
    std::cout << "Adresse stockée dans stringREF : " << (void*)&stringREF << std::endl;

    std::cout << "Valeur de la string : " << myString << std::endl;
    std::cout << "Valeur pointée par stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF : " << stringREF << std::endl;
   return 0;
}
