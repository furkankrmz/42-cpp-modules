#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	zombie1("Flash");
	zombie1.announce();

	Zombie	*zombie2 = newZombie("Tony");
	zombie2->announce();

	randomChump("Spidy");

	delete zombie2;
}
