#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
	: Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	return ;
}