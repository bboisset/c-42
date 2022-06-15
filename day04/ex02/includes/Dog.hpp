#ifndef DEF_DOG_HPP
# define DEF_DOG_HPP
# include "./Animal.hpp"
# include "./Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain *_brain;
	public:
		Dog(void);
		Dog(const Dog &dog);
		virtual ~Dog(void);
		Dog &operator=(const Dog &dog);
		virtual void makeSound(void) const;
};
#endif