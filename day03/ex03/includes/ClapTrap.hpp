#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;//Life points
		int			_energyPoints;
		int			_attackDamage;
		
		bool		doAction(int cost = 1);
		void		information() const;
	private:
		static int	_maxHitPoints;
		static int	_minHitPoints;
		static int	_minEnergyPoints;
		static int	_maxEnergyPoints;
		static	int	_defaultAttackDamage;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	getInformation() const;
};
#endif