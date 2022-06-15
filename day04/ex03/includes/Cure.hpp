#ifndef DEF_CURE_HPP
# define DEF_CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(Cure const &Cure);
		~Cure(void);
		Cure &operator=(Cure const &Cure);
};