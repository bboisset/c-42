#include "../includes/Intern.hpp"

Intern::Intern(void)
	: _formArray{
		RobotomyRequestForm::RobotomyRequestForm,
		ShrubberyCreationForm::ShrubberyCreationForm,
		PresidentialPardonForm::PresidentialPardonForm
	}, 
	_formNames{
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	}
{
	/** Silence is golden **/
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void)
{
}

Intern &Intern::operator=(Intern const &intern)
{
	if (this != &intern)
		*this = intern;
	return *this;
}

int	Intern::_getFormIndex(std::string const &formName) const
{
	for (int i = 0; i < 3; i++) {
		if (this->_formNames[i] == formName)
			return (i);
	}
	return (-1);
}

AForm	*Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
	AForm	*newForm;
	int		formIndex;

	formIndex = this->_getFormIndex(formName);

}