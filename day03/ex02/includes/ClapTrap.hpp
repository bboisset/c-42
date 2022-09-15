#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string	m_name;
		int			m_hitPoints;//Life points
		int			m_energyPoints;
		int			m_attackDamage;
		
		bool		doAction(int cost = 1);
		void		information() const;
	private:
		static int	m_maxHitPoints;
		static int	m_minHitPoints;
		static int	m_minEnergyPoints;
		static int	m_maxEnergyPoints;
		static	int	m_defaultAttackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap & rhs);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	getInformation() const;
};
#endif