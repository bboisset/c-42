# include "../includes/ScavTrap.hpp"

int	ScavTrap::_maxHitPoints = 100;
int	ScavTrap::_minHitPoints = 0;
int	ScavTrap::_minEnergyPoints = 0;
int	ScavTrap::_maxEnergyPoints = 50;
int	ScavTrap::_defaultAttackDamage = 20;

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_attackDamage = _defaultAttackDamage;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	_hitPoints = _maxHitPoints;
	_energyPoints = _maxEnergyPoints;
	_attackDamage = _defaultAttackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destroyed" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " 
		<< _name << " is enter in Gate keeper mod" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (doAction() == false)
		return ;
	std::cout << "ScavTrap " << _name << " attacks " << target 
		<< ", causing " << _attackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::getInformation() const
{
	std::cout << "ScavTrap ";
	ClapTrap::information();
}
