#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", 145, 137, "*blank target*")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
	: AForm("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & form)
	: AForm(form)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const & form)
{
	if (this != &form)
		AForm::operator=(form);
	return (*this);
}