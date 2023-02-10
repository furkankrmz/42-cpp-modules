#include"Weapon.h"

Weapon::Weapon(std::string typ)
{
	type = typ;
}

Weapon::Weapon()
{
}

const std::string& Weapon::getType()
{
	return(type);
}

void Weapon::setType(std::string typ)
{
	type = typ;
}
