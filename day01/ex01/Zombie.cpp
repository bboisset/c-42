#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": *DIE IN TERRIBLE CONDITION*" << std::endl;
}

Zombie::Zombie(void)
	: name("")
{
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}