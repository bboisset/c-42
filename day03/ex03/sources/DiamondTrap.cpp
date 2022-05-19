# include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
	: FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
}