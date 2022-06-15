#ifndef DEF_ICE_HPP
# define DEF_ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(Ice const &Ice);
		~Ice(void);
		Ice &operator=(Ice const &Ice);
};
#endif