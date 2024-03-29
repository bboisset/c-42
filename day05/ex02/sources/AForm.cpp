#include "../includes/AForm.hpp"

AForm::AForm(void)
	: _name("*blank name*"), _isSigned(false), _requiredGradeToSign(150), _requiredGradeToExecute(150), _target("*blank target*")
{
}

AForm::AForm(std::string const &name, int requiredGradeToSign, int requiredGradeToExecute, std::string const &target)
	: _name(name), _isSigned(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExecute), _target(target)
{
}

AForm::AForm(AForm const & form)
	: _name(form._name), _isSigned(form._isSigned), _requiredGradeToSign(form._requiredGradeToSign), _requiredGradeToExecute(form._requiredGradeToExecute)
{
}

AForm::~AForm(void)
{
}

AForm &AForm::operator=(AForm const & form)
{
	if (this != &form)
	{
		_isSigned = form._isSigned;
		_requiredGradeToSign = form._requiredGradeToSign;
		_requiredGradeToExecute = form._requiredGradeToExecute;
	}
	return (*this);
}

void	AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _requiredGradeToSign)
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

/**
 * @brief Verify if current Bureaucrat can execute current Form
 * and form is signed. If true execute form.
 * 
 * @param bureaucrat 
 */
void	AForm::execute(Bureaucrat const &bureaucrat) const
{
	if (_isSigned == false)
		throw AForm::FormNotSigned();
	if (bureaucrat.getGrade() > _requiredGradeToExecute)
		throw AForm::GradeTooLowException();
	this->formAction();
}

std::string	AForm::getName(void) const 
{
	return (_name);
}

std::string AForm::getTarget(void) const
{
	return (_target);
}

bool	AForm::getIsSigned(void) const
{
	return (_isSigned);
}

int	AForm::getRequiredGradeToSign(void) const
{
	return (_requiredGradeToSign);
}

int	AForm::getRequiredGradeToExecute(void) const
{
	return (_requiredGradeToExecute);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too is too low");
}

const char	*AForm::FormNotSigned::what() const throw ()
{
	return ("Form need to be sign for execution");
}

std::ostream	&operator<<(std::ostream &os, AForm const &form)
{
	os << "Form : " << form.getName() << std::endl;
	os << "Required grade to sign : " << form.getRequiredGradeToSign() << " to sign" << std::endl;
	os << "Required grade to execute : " << form.getRequiredGradeToExecute() << " to execute";
	return (os);
}