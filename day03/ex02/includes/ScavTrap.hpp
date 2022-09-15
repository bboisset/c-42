#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		static int	m_maxHitPoints;
		static int	m_minHitPoints;
		static int	m_minEnergyPoints;
		static int	m_maxEnergyPoints;
		static int	m_defaultAttackDamage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & scavTrap);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap & rhs);

		void	guardGate();
		void	attack(const std::string& target);
		void	getInformation() const;
};
#endif