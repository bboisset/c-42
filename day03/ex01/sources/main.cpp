# include "../includes/ClapTrap.hpp"
# include "../includes/ScavTrap.hpp"


int main(void)
{
	std::cout << "ClapTrap initialization :" << std::endl;
	ClapTrap	dummy("Dummy");
	std::cout << "ScavTrap initialization :" << std::endl;
	ScavTrap	yummy("Yummy");

	std::cout << std::endl;
	dummy.getInformation();
	yummy.getInformation();
	std::cout << std::endl;
	yummy.guardGate();
	dummy.attack("Yummy");
	yummy.attack("Dummy");
	dummy.takeDamage(5);
	yummy.takeDamage(5);
	dummy.getInformation();
	yummy.getInformation();
	dummy.beRepaired(5);
	yummy.beRepaired(5);
	dummy.getInformation();
	yummy.getInformation();
	dummy.takeDamage(15);
	yummy.takeDamage(15);
	dummy.attack("Yummy");
	yummy.attack("Dummy");
	return (0);
}