#ifndef DEF_CHARACTER_HPP
# define DEF_CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
	protected:
		AMateria* _inventory[4];
	private:
		Character(void);
		Character(Character const &Character);
		~Character(void);
		Character &operator=(Character const &Character);
};
#endif