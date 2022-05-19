#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	m_name;
		static int	m_maxHitPoints;
		static int	m_minHitPoints;
		static int	m_minEnergyPoints;
		static int	m_maxEnergyPoints;
		static int	m_defaultAttackDamage;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		void	getInformation() const;
};

#endif