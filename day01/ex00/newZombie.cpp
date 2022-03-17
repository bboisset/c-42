# include "Zombie.hpp"

/**
 * @brief Crée un nouveau zommbie et le renvoit, pour qu'il soit utilisé en dehors
 * 
 * @param name 
 * @return Zombie* 
 */
Zombie* Zombie::newZombie(std::string name)
{
    Zombie  *newZ(name);

    return (newZ);
}