# include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie  newZ(name);

	newZ.announce();
}