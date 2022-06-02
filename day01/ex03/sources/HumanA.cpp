# include "../includes/HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << name << " attacks with their ";
	weapon->getType();
}

/**
 * @brief Assign Weapon to Human object
 * Weapon type can be null
 * 
 * @param newWeapon 
 */
HumanA::HumanA(std::string extName, Weapon &extWeapon)
	: name(extName), weapon(0)
{
	weapon = &extWeapon;
}

HumanA::~HumanA(void)
{
}