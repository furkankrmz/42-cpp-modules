#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	m_name;

public:
	Zombie();
	Zombie(std::string);
	~Zombie();

	void	announce(void);
	void	set_name(std::string name);
};

#endif
