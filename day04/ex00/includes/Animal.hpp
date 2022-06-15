#ifndef DEF_ANIMAL_HPP
# define DEF_ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(const Animal &animal);
		~Animal(void);
		Animal &operator=(const Animal &animal);
		virtual void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string	_type;
};
#endif