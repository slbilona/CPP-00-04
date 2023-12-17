#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <string>
#include "iostream"
#include "ostream"

class Brain
{
private:
    std::string *ideas; // tableau de 100 std::string

public:
    // Constructeur par défaut
    Brain();

    // Constructeur de copie
    Brain(const Brain &other);

    // Opérateur d'affectation
    Brain &operator=(const Brain &other);

    // Destructeur
    ~Brain();
};


#endif // BRAIN_HPP
