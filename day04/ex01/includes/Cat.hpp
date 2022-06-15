#ifndef DEF_CAT_HPP
# define DEF_CAT_HPP
# include "./Animal.hpp"
# include "./Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_brain;
	public:
		Cat(void);
		Cat(const Cat &cat);
		virtual ~Cat(void);
		Cat &operator=(const Cat &cat);
		virtual void makeSound(void) const;
};
#endif