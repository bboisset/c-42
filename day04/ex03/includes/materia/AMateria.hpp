#ifndef DEF_AMateria_HPP
# define DEF_AMateria_HPP
# include "./ICharacter.hpp"
# include <string>

/**
 * @brief Abstract class for all materias.
 * 
 */
class AMateria {
	protected:

	public:
		AMateria(void);
		AMateria(AMateria const &AMateria);
		AMateria(std::string const & cdtype);
		~AMateria(void);
		AMateria &operator=(AMateria const &materia);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif