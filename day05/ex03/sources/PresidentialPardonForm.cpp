#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) 
	: AForm("Presidential Pardon Form", 25, 5, "*blank target*")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
	: AForm("Presidential Pardon Form", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & form)
	: AForm(form)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & form)
{
	if (this != &form)
		AForm::operator=(form);
	return (*this);
}

void	PresidentialPardonForm::pardonTarget(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::formAction(void) const
{
	this->pardonTarget();
}