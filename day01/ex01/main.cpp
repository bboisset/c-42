# include "Zombie.hpp"

void	loopZombies(Zombie *zombieHorde, int zombieCount)
{
	for (int i(0); i < zombieCount; i++)
		zombieHorde[i].announce();
}

/**
 * @brief Allocate X zombie in single time
 * - Announce each of theme
 * - Delete theme
 * 
 * @return int 
 */
int main(void)
{
	int		zombieCount(10);
	Zombie	*horde = zombieHorde(zombieCount, "Alvin");

	std::cout << "10 Zombies in production" << std::endl;
	loopZombies(horde, zombieCount);
	delete [] horde;
	return (0);
}