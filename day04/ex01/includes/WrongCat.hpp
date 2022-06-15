#ifndef DEF_WRONG_CAT_HPP
# define DEF_WRONG_CAT_HPP
# include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat &cat);
		~WrongCat(void);
		WrongCat &operator=(const WrongCat &cat);
		void makeSound(void) const;
};
#endif