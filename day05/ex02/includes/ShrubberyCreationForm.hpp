#ifndef DEF_SHRUBBERY_CREATION_FORM_HPP
# define DEF_SHRUBBERY_CREATION_FORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & form);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
};
# endif