#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	int	N = 10;
	Zombie	*Horde = zombieHorde(N, "Sorb");

	if (Horde == NULL)
		return (1);
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete[] Horde;
}
