# include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << "*deaaad*" << std::endl;
}

Zombie::Zombie(std::string zName)
    : name(zName)
{

}