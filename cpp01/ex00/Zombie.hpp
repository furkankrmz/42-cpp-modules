#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	m_name;

public:
	Zombie(std::string);
	~Zombie();

	void	announce(void);
};

#endif
