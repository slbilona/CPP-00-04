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
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();
};


#endif // BRAIN_HPP
