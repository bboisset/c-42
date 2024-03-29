#include "../includes/Intern.hpp"

Intern::Intern(void)
{
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

int	Intern::getFormIndex(std::string const &formName) const
{
	std::string	formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	for (int i = 0; i < 3; i++) {
		if (formNames[i] == formName)
			return (i);
	}
	return (-1);
}

AForm *Intern::getFormConstructor(int formIndex, std::string target) const
{
	AForm	*form(NULL);

	switch (formIndex)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			form = NULL;
	}
	return (form);
}

const char *Intern::UndefinedFormException::what() const throw()
{
	return ("Intern: Undefined form");
}

AForm	*Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
	int		formIndex;

	formIndex = this->getFormIndex(formName);
	if (formIndex == -1)
		throw Intern::UndefinedFormException();
	return (this->getFormConstructor(formIndex, formTarget));
}