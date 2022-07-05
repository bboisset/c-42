#ifndef DEF_PRESIDENTIAL_PARDON_FORM_HPP
# define DEF_PRESIDENTIAL_PARDON_FORM_HPP
# include "./AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		/** Member functions **/
		virtual void formAction(void) const;
		void pardonTarget(void) const;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & form);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &form);
};

#endif