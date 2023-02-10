#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.h"

class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string h_name);
		void attack();
		void  setWeapon(Weapon &_weapon);
};
#endif
