#include "Zombie.hpp"

/**
 * @brief Crée un nouveau zombie via une allocation dynamique
 * et le renvoit
 *
 * @param name
 * @return Zombie*
 */
Zombie*	newZombie(std::string name)
{
	Zombie *newZ = new Zombie(name);

	return (newZ);
}