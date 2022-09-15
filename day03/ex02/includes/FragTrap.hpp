#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		static int	m_maxHitPoints;
		static int	m_minHitPoints;
		static int	m_minEnergyPoints;
		static int	m_maxEnergyPoints;
		static int	m_defaultAttackDamage;
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		FragTrap& operator=(const FragTrap & rhs);

		void	getInformation() const;
		void	highFiveGuys(void);
};
#endif