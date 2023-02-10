#include "HumanA.h"

HumanA::HumanA(std::string h_name, Weapon _weapon)
{
	name = h_name;
	weapon = _weapon;
}
void HumanA::attack()
{
	std::cout << name <<" attacks with their "<< weapon.getType()<<std::endl;
}
