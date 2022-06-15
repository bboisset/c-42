#ifndef DEF_CAT_HPP
# define DEF_CAT_HPP
# include "./Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat &cat);
		~Cat(void);
		Cat &operator=(const Cat &cat);
		virtual void makeSound(void) const;
};
#endif