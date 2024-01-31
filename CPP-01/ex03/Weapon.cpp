#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type) {}

Weapon::Weapon() {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string _type)
{
	this->type = _type;
}