#ifndef DEF_INTERN_HPP
# define DEF_INTERN_HPP
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

/**
 * @brief Class Intern is only dedicated to the creation of AForms.
 */
class Intern {
	private:
		int		getFormIndex(std::string const &formName) const;
		AForm	*getFormConstructor(int formIndex, std::string target) const;

		void (*_formConstructors[3])() = {};
		std::string	_formNames[3];
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern	&operator=(Intern const &intern);
		AForm	*makeForm(std::string const &formName, std::string const &formTarget);
		int		getFormId(std::string const &formName);
};
#endif