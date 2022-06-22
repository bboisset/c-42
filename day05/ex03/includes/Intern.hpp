#ifndef DEF_INTERN_HPP
# define DEF_INTERN_HPP
# include "Form.hpp"
# include <string>

class Intern {
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern &operator=(Intern const &intern);
		Form *makeForm(std::string const &formName, std::string const &formTarget);
};
#endif