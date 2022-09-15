#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPPs
# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string	m_name;
		int			m_hitPoints;//Life points
		int			m_energyPoints;
		int			m_attackDamage;
		static int	m_maxHitPoints;
		static int	m_minHitPoints;
		static int	m_minEnergyPoints;
		static int	m_maxEnergyPoints;
		static int	m_defaultAttackDamage;

		bool		doAction(int cost = 1);
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap & rhs);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	getInformation();
};
#endif