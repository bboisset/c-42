# include "Zombie.hpp"

/**
 * @brief Create a Zombie Horde in a single allocation
 * 
 * @param N Number of zombie to allocate
 * @param name Name of all zombies
 * @return Zombie* 
 * @todo S'assurer que les zombies soient bien free
 */
Zombie*	zombieHorde( int N, std::string name )
{
	//S assurer que la variable N cree bien X zombie
	Zombie	*horde = new Zombie[N];

	for (int i(0); i < N; i++)
		horde[i].setName(name);
	return (horde);
}