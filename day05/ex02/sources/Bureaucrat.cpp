# include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
	: _name("")
{
	setAuthorizationLevel(150);
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat)
	: _name(bureaucrat._name), _authorizationLevel(bureaucrat._authorizationLevel)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & bureaucrat)
{
	if (this != &bureaucrat)
		_authorizationLevel = bureaucrat.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
	os << bureaucrat.getName() << " : bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_authorizationLevel);
}

void Bureaucrat::setAuthorizationLevel(int authorizationLevel)
{
	if (authorizationLevel < 1)
		throw Bureaucrat::GradeTooHighException();
	if (authorizationLevel > 150)
		throw Bureaucrat::GradeTooLowException();
	_authorizationLevel = authorizationLevel;
}

int	Bureaucrat::increaseGrade(void)
{
	if (_authorizationLevel - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_authorizationLevel--;
	return (_authorizationLevel);
}

int Bureaucrat::decreaseGrade(void)
{
	if (_authorizationLevel + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_authorizationLevel++;
	return (_authorizationLevel);
}

bool	Bureaucrat::signForm(AForm & form)
{
	try {
		form.beSigned(*this);

		std::cout << this->getName() << " signed " << form.getName() << std::endl;
		return (true);
	} catch (std::exception &e) {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
		return (false);
	}
}

bool	Bureaucrat::executeForm(AForm & form)
{
	try {
		form.execute(*this);

		std::cout << this->getName() << " executed " << form.getName() << " with success " << std::endl;
		return (true);
	} catch (std::exception &e) {
		std::cout << this->getName() << " coudn't execute " << form.getName() << " because " << e.what() << std::endl;
		return (false);
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Maximum grade is defined to 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Minimum grade is defined to 150");
}

Bureaucrat::Bureaucrat(std::string const & name, int authorizationLevel)
	: _name(name)
{
	setAuthorizationLevel(authorizationLevel);
}
