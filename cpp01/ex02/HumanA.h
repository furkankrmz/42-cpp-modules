#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.h"

class HumanA{
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanA(std::string h_name,Weapon _weapon);
		void attack();
};
#endif
