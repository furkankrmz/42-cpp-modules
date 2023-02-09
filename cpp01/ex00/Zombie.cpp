#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->m_name = name;
}

Zombie::~Zombie()
{
	std::cout << m_name << " destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
