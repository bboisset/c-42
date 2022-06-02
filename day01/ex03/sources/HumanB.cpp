# include "../includes/HumanB.hpp"

void HumanB::attack(void)
{
	if (weapon)
	{
		std::cout << name << " attacks with their ";
		weapon->getType();
	}
	else
	{
		std::cout << name << " can't attack without a weapon" << std::endl;
	}
}

/**
 * @brief Assign Weapon to Human object
 * Weapon type can be null
 * 
 * @param newWeapon 
 */
void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

HumanB::HumanB(std::string extName)
	: name(extName), weapon(0)
{
}