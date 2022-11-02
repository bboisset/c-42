#include "../includes/AForm.hpp"

AForm::AForm(void)
	: _name("*blank name*"), _target("*blank target*"), _isSigned(false), _requiredGradeToSign(150), _requiredGradeToExecute(150)
{
}

AForm::AForm(std::string const &name, int requiredGradeToSign, int requiredGradeToExecute, std::string const &target)
	: _name(name), _target(target), _isSigned(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExecute)
{
	this->verifyGrade();
}

AForm::AForm(AForm const & rhs)
	: _name(rhs._name), _isSigned(rhs._isSigned), _requiredGradeToSign(rhs._requiredGradeToSign), _requiredGradeToExecute(rhs._requiredGradeToExecute)
{
	this->verifyGrade();
}

AForm::~AForm(void)
{
}

AForm &AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
	{
		_isSigned = rhs._isSigned;
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

void AForm::verifyGrade(void) const
{
	if (_requiredGradeToSign < 1 || _requiredGradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (_requiredGradeToSign > 150 || _requiredGradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char *AForm::InsufficientGradeException::what() const throw()
{
	return ("Bureaucrat grade is too low to sign this form");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("Form need to be sign for execution");
}

const char *AForm::FileOpenException::what() const throw()
{
	return ("ShrubberyCreationForm::FileOpenException: File could not be opened.");
}


std::ostream	&operator<<(std::ostream &os, AForm const &form)
{
	os << "Form : " << form.getName() << std::endl;
	os << "Required grade to sign : " << form.getRequiredGradeToSign() << " to sign" << std::endl;
	os << "Required grade to execute : " << form.getRequiredGradeToExecute() << " to execute";
	return (os);
}