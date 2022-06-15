#ifndef DEF_ANIMAL_HPP
# define DEF_ANIMAL_HPP
# include "./Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog &dog);
		~Dog(void);
		Dog &operator=(const Dog &dog);
		virtual void makeSound(void) const;
};
#endif