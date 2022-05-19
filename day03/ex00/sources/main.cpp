# include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap	dummy("Dummy");

	dummy.getInformation();
	dummy.attack("Yummy");
	dummy.takeDamage(5);
	dummy.getInformation();
	dummy.beRepaired(5);
	dummy.getInformation();
	dummy.takeDamage(15);
	dummy.attack("Yummy");
	return (0);
}