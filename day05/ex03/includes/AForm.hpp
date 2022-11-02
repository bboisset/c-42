#ifndef DEF_FORM_HPP
# define DEF_FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat; 

class AForm {
	private:
		std::string	const _name;
		std::string	const _target;
		bool	_isSigned;
		int	const	_requiredGradeToSign;
		int	const	_requiredGradeToExecute;

		/** Member functions **/
		virtual void formAction(void) const = 0;

	public:
		AForm(void);
		AForm(std::string const & name, int requiredGradeToSign, int requiredGradeToExecute, std::string const &target);
		AForm(AForm const & rhs);
		virtual ~AForm(void) = 0;
		AForm &operator=(AForm const &rhs);

		/** Member functions **/
		void	beSigned(Bureaucrat const &bureaucrat);
		void	execute(Bureaucrat const &executor) const;

		/** Getters */
		std::string	getName(void) const;
		std::string	getTarget(void) const;
		bool		getIsSigned(void) const;
		int			getRequiredGradeToSign(void) const;
		int			getRequiredGradeToExecute(void) const;

		void		verifyGrade(void) const;

		/** Exceptions **/
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class InsufficientGradeException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class FormNotSigned : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class FileOpenException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, AForm const &form);

#endif