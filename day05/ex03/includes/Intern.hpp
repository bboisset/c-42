#ifndef DEF_INTERN_HPP
# define DEF_INTERN_HPP
# include "./AForm.hpp"
# include <string>

class Intern {
	private:
		std::string	_formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern	&operator=(Intern const &intern);
		AForm	*makeForm(std::string const &formName, std::string const &formTarget);
		int		getFormId(std::string const &formName);
};
#endif