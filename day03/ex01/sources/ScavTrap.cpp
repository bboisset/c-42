# include "../includes/ScavTrap.hpp"

int	ScavTrap::m_maxHitPoints = 100;
int	ScavTrap::m_minHitPoints = 0;
int	ScavTrap::m_minEnergyPoints = 50;
int	ScavTrap::m_maxEnergyPoints = 10;
int	ScavTrap::m_defaultAttackDamage = 20;

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	m_hitPoints = m_maxHitPoints;
	m_energyPoints = m_maxEnergyPoints;
	m_attackDamage = m_defaultAttackDamage;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	m_hitPoints = m_maxHitPoints;
	m_energyPoints = m_maxEnergyPoints;
	m_attackDamage = m_defaultAttackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << m_name << " has been destroyed" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " 
		<< m_name << " is enter in Gate keeper mod" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (doAction() == false)
		return ;
	std::cout << "ScavTrap " << m_name << " attacks " << target 
		<< ", causing " << m_attackDamage << " points of damage !" << std::endl;
}

void	ScavTrap::getInformation() const
{
	std::cout << "ScavTrap ";
	ClapTrap::information();
}
