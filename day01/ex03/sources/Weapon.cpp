# include "../includes/Weapon.hpp"

void	Weapon::setType(std::string newType)
{
	type = newType;
}

void	Weapon::getType(void) const
{
	std:: cout << type << std::endl;
}

Weapon::Weapon(std::string extType)
	: type(extType)
{}