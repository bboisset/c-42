# include "../includes/ClapTrap.hpp"

int	ClapTrap::m_maxHitPoints = 10;
int	ClapTrap::m_minHitPoints = 0;
int	ClapTrap::m_minEnergyPoints = 0;
int	ClapTrap::m_maxEnergyPoints = 10;
int	ClapTrap::m_defaultAttackDamage = 0;

ClapTrap::ClapTrap()
	: m_name(""), m_hitPoints(m_maxHitPoints), m_energyPoints(m_maxEnergyPoints),
	m_attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: m_name(name), m_hitPoints(m_maxHitPoints), m_energyPoints(m_maxEnergyPoints),
	m_attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << m_name << " has been destroyed" << std::endl;
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
	if (m_energyPoints - cost == m_minEnergyPoints)
	{
		std::cout << "ClapTrap " << m_name << " is out of energy points" << std::endl;
		return (false);
	}
	if (m_hitPoints == m_minHitPoints)
	{
		std::cout << "ClapTrap " << m_name << " is out of hit points" << std::endl;
		return (false);
	}
	m_energyPoints -= cost;
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
	std::cout << "ClapTrap " << m_name << " attacks " << target 
		<< ", causing " << m_attackDamage << " points of damage !" << std::endl;
	
}

/**
 ** @brief ClapTrape take (amount) dammage
 ** If m_hitPoints is lower than 0, set it to 0
 ** 
 ** @param amount 
 **/
void	ClapTrap::takeDamage(unsigned int amount)
{
	m_hitPoints -= amount;
	std::cout  << m_name << " takes " << amount << " points of damage !" << std::endl;
	if (m_hitPoints < m_minHitPoints)
	{
		m_hitPoints = m_minHitPoints;
		std::cout << "ClapTrap " << m_name << " is out of hit points" << std::endl;
	}
}

/**
 ** @brief Repairs the ClapTrap. Add amount to m_hitPoints
 ** ClapTrap should be able to do an action before being repaired
 ** Cost 1 energy point
 ** 
 ** @param amount 
 **/
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (doAction() == false)
		return ;
	m_hitPoints += amount;
	std::cout << "ClapTrap " << m_name << " has been repaired, restoring "
		<< amount << " hit points !" << std::endl;
	if (m_hitPoints > m_maxHitPoints)
		m_hitPoints = m_maxHitPoints;
}

void	ClapTrap::information() const
{
	std::cout << m_name << " has " << m_hitPoints << " hit points, "
		<< m_energyPoints << " energy points, " << m_attackDamage << " attack damage." << std::endl;
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