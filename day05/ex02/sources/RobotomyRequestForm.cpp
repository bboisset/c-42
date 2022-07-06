#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotonomyRequestForm", 72, 45, "*blank target*")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
	: AForm("RobotonomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & form)
	: AForm(form)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const & form)
{
	if (this != &form)
		AForm::operator=(form);
	return (*this);
}

/**
 * @brief Robotomise the target of the form,
 * with a chance of success of 50%.
 * - The random is guaranteed by srand(clock())
 * who gave a different number each time.
 * 
 * @return true 
 * @return false 
 */
bool	RobotomyRequestForm::robotomyRequest(void) const
{
	srand(clock());
	
	std::cout << "BZZZZZZZZZZ" << std::endl;
	if ((std::rand() % 2) != 0){
		std::cout << "Robot " << this->getTarget() << " has been robotomized successfully!" << std::endl;
		return (true);
	} else {
		std::cout << "Robot " << this->getTarget() << " has failed to be robotomized!" << std::endl;
		return (false);
	}
}

void	RobotomyRequestForm::formAction(void) const
{
	std::cout << "" << std::endl;
	this->robotomyRequest();
}