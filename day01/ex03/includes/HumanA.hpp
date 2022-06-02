#ifndef DEF_HUMANA_HPP
# define DEF_HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		void attack(void);
		HumanA(std::string extName, Weapon& extWeapon);
		~HumanA(void);
};
#endif