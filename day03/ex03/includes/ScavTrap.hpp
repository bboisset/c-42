#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		static int	_maxHitPoints;
		static int	_minHitPoints;
		static int	_minEnergyPoints;
		static int	_maxEnergyPoints;
		static int	_defaultAttackDamage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void	guardGate();
		void	attack(const std::string& target);
		void	getInformation() const;
};
#endif