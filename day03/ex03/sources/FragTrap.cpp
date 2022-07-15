# include "../includes/FragTrap.hpp"

int	FragTrap::_maxHitPoints = 100;
int	FragTrap::_minHitPoints = 0;
int	FragTrap::_minEnergyPoints = 0;
int	FragTrap::_maxEnergyPoints = 100;
int	FragTrap::_defaultAttackDamage = 30;

FragTrap::FragTrap()
	: ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_attackDamage = _defaultAttackDamage;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_attackDamage = _defaultAttackDamage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed" << std::endl;
}

void	FragTrap::getInformation() const
{
	std::cout << "FragTrap ";
	ClapTrap::information();
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << _name << ": high five guys ?" << std::endl;
}