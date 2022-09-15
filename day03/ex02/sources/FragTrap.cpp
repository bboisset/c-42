# include "../includes/FragTrap.hpp"

int	FragTrap::m_maxHitPoints = 100;
int	FragTrap::m_minHitPoints = 0;
int	FragTrap::m_minEnergyPoints = 0;
int	FragTrap::m_maxEnergyPoints = 100;
int	FragTrap::m_defaultAttackDamage = 30;

FragTrap::FragTrap()
	: ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	m_hitPoints = m_maxHitPoints;
	m_energyPoints = m_maxEnergyPoints;
	m_attackDamage = m_defaultAttackDamage;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	m_hitPoints = m_maxHitPoints;
	m_energyPoints = m_maxEnergyPoints;
	m_attackDamage = m_defaultAttackDamage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << m_name << " has been destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap & rhs)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	m_name = rhs.m_name;
	m_hitPoints = rhs.m_hitPoints;
	m_energyPoints = rhs.m_energyPoints;
	m_attackDamage = rhs.m_attackDamage;
	return *this;
}

void	FragTrap::getInformation() const
{
	std::cout << "FragTrap ";
	ClapTrap::information();
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << m_name << ": high five guys ?" << std::endl;
}