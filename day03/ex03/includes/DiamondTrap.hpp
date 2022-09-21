#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
		static int	_maxHitPoints;
		static int	_minHitPoints;
		static int	_minEnergyPoints;
		static int	_maxEnergyPoints;
		static int	_defaultAttackDamage;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &diamondTrap);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap & rhs);	

		void	getInformation() const;
};

#endif