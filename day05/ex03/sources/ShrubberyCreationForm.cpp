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

void	ShrubberyCreationForm::buildTreeFile(void) const
{
	std::string	filename(this->getTarget() + "_shrubbery");
	std::ofstream treeFile;

	treeFile.open(filename.c_str(), std::ofstream::out | std::ofstream::app);
	if (!treeFile.is_open())
		throw AForm::FileOpenException();
	treeFile << "               ,@@@@@@@,             " << std::endl;
	treeFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.  " << std::endl;
	treeFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
	treeFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	treeFile << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' " << std::endl;
	treeFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
	treeFile << "  `&%\\ ` /%&'    |.|        \\ '|8'    " << std::endl;
	treeFile << "      |o|        | |         | |      " << std::endl;
	treeFile << "      |.|        | |         | |      " << std::endl;
	treeFile << "  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/" << std::endl;
	treeFile.close();
}

void	ShrubberyCreationForm::formAction(void) const
{
	this->buildTreeFile();
}