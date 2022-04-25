#include "Weapon.hpp"
#include <iostream>
#include <string>
Weapon::Weapon( std::string type ) : type(type){}

Weapon::~Weapon(){}

const std::string&	Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType( std::string newType )
{
	this->type = newType;
}