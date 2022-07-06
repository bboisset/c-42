#ifndef DEF_ROBOTONOMY_REQUEST_FORM_HPP
# define DEF_ROBOTONOMY_REQUEST_FORM_HPP
# include "AForm.hpp"
# include <ctime>

class RobotomyRequestForm : public AForm {
	private:
		/** Member functions **/
		virtual void formAction(void) const;
		bool robotomyRequest(void) const;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & form);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &form);
};

#endif