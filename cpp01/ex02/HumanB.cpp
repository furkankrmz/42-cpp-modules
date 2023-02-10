#include"HumanB.h"

HumanB::HumanB(std::string h_name)
{
	name = h_name;
}

void HumanB::attack()
{
        std::cout << name <<" attacks with their "<< weapon.getType()<<std::endl;
}

void HumanB::setWeapon(Weapon _weapon)
{
	weapon = _weapon;
}
