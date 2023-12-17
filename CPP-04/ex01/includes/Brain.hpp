#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <string>
#include "iostream"
#include "ostream"

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	Brain(const Brain& autre);
	Brain& operator=(const Brain& autre);
	~Brain();
};


#endif // BRAIN_HPP
