#ifndef DEF_ANIMAL_HPP
# define DEF_ANIMAL_HPP
# include <string>
# include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal(void) = 0;
		AAnimal &operator=(const AAnimal &animal);
		virtual void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string	_type;
};
#endif