#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <ostream>
#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string _type);
	~Weapon();
	const std::string& getType() const;
	void setType(std::string _type);
};

#endif