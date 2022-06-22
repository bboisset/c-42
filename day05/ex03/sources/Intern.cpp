#include "../includes/Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &intern)
{
	if (this != &intern)
		*this = intern;
	return *this;
}

Form	*Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
	Form	*newForm;


}