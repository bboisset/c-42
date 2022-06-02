#ifndef DEF_WEAPON_HPP
# define DEF_WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		void	getType(void) const;
		void	setType(std::string newType);
		Weapon(std::string extType);
};

#endif