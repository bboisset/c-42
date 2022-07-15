# include "../includes/ClapTrap.hpp"

int	ClapTrap::_maxHitPoints = 10;
int	ClapTrap::_minHitPoints = 0;
int	ClapTrap::_minEnergyPoints = 0;
int	ClapTrap::_maxEnergyPoints = 10;
int	ClapTrap::_defaultAttackDamage = 0;

ClapTrap::ClapTrap()
	: _name(""), _hitPoints(_maxHitPoints), _energyPoints(_maxEnergyPoints),
	_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(_maxHitPoints), _energyPoints(_maxEnergyPoints),
	_attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
}

/**
 ** @brief Determine if the ClapTrap can perform an action with x cost
 ** - If the ClapTrap has not enough energy points, return false
 ** - If the ClapTrap has no hit points, it cannot perform an action
 ** If the ClapTrap can perform an action, it will remove one energy point
 ** 
 ** @return (bool) if the ClapTrap can perform an action, false otherwise
 **/
bool	ClapTrap::doAction(int cost)
{
	if (_energyPoints - cost == _minEnergyPoints)
	{
		std::cout << "ClapTrap " << _name << " is out of energy points" << std::endl;
		return (false);
	}
	if (_hitPoints == _minHitPoints)
	{
		std::cout << "ClapTrap " << _name << " is out of hit points" << std::endl;
		return (false);
	}
	_energyPoints -= cost;
	return (true);
}

/**
 ** @brief ClapTrap attacks a target.
 ** ClapTrap should be able to do an action before attacking
 ** Cost 1 energy point
 ** 
 ** @param target 
 **/
void	ClapTrap::attack(const std::string& target)
{
	if (doAction() == false)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target 
		<< ", causing " << _attackDamage << " points of damage !" << std::endl;
	
}

/**
 ** @brief ClapTrape take (amount) dammage
 ** If _hitPoints is lower than 0, set it to 0
 ** 
 ** @param amount 
 **/
void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout  << _name << " takes " << amount << " points of damage !" << std::endl;
	if (_hitPoints < _minHitPoints)
	{
		_hitPoints = _minHitPoints;
		std::cout << "ClapTrap " << _name << " is out of hit points" << std::endl;
	}
}

/**
 ** @brief Repairs the ClapTrap. Add amount to _hitPoints
 ** ClapTrap should be able to do an action before being repaired
 ** Cost 1 energy point
 ** 
 ** @param amount 
 **/
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (doAction() == false)
		return ;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " has been repaired, restoring "
		<< amount << " hit points !" << std::endl;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
}

void	ClapTrap::information() const
{
	std::cout << _name << " has " << _hitPoints << " hit points, "
		<< _energyPoints << " energy points, " << _attackDamage << " attack damage." << std::endl;
}

/**
 ** @brief Return all informations about the ClapTrap
 ** 
 **/
void	ClapTrap::getInformation() const
{
	std::cout << "ClapTrap ";
	information();
}