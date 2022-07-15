#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		static int	_maxHitPoints;
		static int	_minHitPoints;
		static int	_minEnergyPoints;
		static int	_maxEnergyPoints;
		static int	_defaultAttackDamage;
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void	getInformation() const;
		void	highFiveGuys(void);
};
#endif