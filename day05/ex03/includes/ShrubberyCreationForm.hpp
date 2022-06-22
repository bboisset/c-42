#ifndef DEF_SHRUBBERY_CREATION_FORM_HPP
# define DEF_SHRUBBERY_CREATION_FORM_HPP
# include "AForm.hpp"
# include <fstream>
# include <ctime>

class ShrubberyCreationForm : public AForm {
	private:
		/** Member functions **/
		void	buildTreeFile(void) const;
		virtual void formAction(void) const;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & form);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
};
# endif