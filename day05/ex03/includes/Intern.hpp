#ifndef DEF_INTERN_HPP
# define DEF_INTERN_HPP
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

class Intern {
	private:
		int	_getFormIndex(std::string const &formName) const;
		AForm (*_formArray[3])();
		std::string	_formNames[3];
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern &operator=(Intern const &intern);
		AForm *makeForm(std::string const &formName, std::string const &formTarget);
};
#endif