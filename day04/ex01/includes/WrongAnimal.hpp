#ifndef DEF_WRONG_ANIMAL_HPP
# define DEF_WRONG_ANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &animal);
		~WrongAnimal(void);
		WrongAnimal &operator=(const WrongAnimal &animal);
		void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string	_type;
};
#endif