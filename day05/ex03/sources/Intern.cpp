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

int		Intern::getFormId(std::string const &formName)
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == _formNames[i])
			return (i);
	}
	return (-1);
}

AForm	*Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
	AForm	*newForm;
	int		formIndex = getFormId(formName);
	
	std::cout << "formID : " << formIndex << std::endl;
}