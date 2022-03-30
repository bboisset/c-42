#ifndef DEF_HUMANB_HPP
# define DEF_HUMANB_HPP
# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		void	setWeapon(Weapon &newWeapon);
		void	attack(void);
		HumanB(std::string extName);
};
#endif