#ifndef DEF_MATERIASOURCE_HPP
# define DEF_MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &MateriaSource);
		~MateriaSource(void);
		MateriaSource &operator=(MateriaSource const &MateriaSource);
};
#endif