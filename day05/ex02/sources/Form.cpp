#include "../includes/Form.hpp"

Form::Form(void)
	: _name("*blank name*"), _isSigned(false), _requiredGradeToSign(150), _requiredGradeToExecute(150)
{
}

Form::Form(std::string const &name, int requiredGradeToSign, int requiredGradeToExecute)
	: _name(name), _isSigned(false), _requiredGradeToSign(requiredGradeToSign), _requiredGradeToExecute(requiredGradeToExecute)
{
}

Form::Form(Form const & form)
	: _name(form._name), _isSigned(form._isSigned), _requiredGradeToSign(form._requiredGradeToSign), _requiredGradeToExecute(form._requiredGradeToExecute)
{
}

Form::~Form(void)
{
}

Form &Form::operator=(Form const & form)
{
	if (this != &form)
	{
		_isSigned = form._isSigned;
		_requiredGradeToSign = form._requiredGradeToSign;
		_requiredGradeToExecute = form._requiredGradeToExecute;
	}
	return (*this);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _requiredGradeToSign)
		throw Form::GradeTooLowException();
	_isSigned = true;
}

std::string	Form::getName(void) const 
{
	return (_name);
}

bool	Form::getIsSigned(void) const
{
	return (_isSigned);
}

int	Form::getRequiredGradeToSign(void) const
{
	return (_requiredGradeToSign);
}

int	Form::getRequiredGradeToExecute(void) const
{
	return (_requiredGradeToExecute);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too is too low");
}

std::ostream	&operator<<(std::ostream &os, Form const &form)
{
	os << "Form : " << form.getName() << std::endl;
	os << "Required grade to sign : " << form.getRequiredGradeToSign() << " to sign" << std::endl;
	os << "Required grade to execute : " << form.getRequiredGradeToExecute() << " to execute";
	return (os);
}