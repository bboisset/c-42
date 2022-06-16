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
		int		_requiredGradeToSign;
		int		_requiredGradeToExecute;
	public:
		AForm(void);
		AForm(std::string const & name, int requiredGradeToSign, int requiredGradeToExecute, std::string const &target);
		AForm(AForm const & form);
		virtual ~AForm(void) = 0;
		AForm &operator=(AForm const &form);

		/** Member functions **/
		void	beSigned(Bureaucrat const &bureaucrat);

		/** Getters */
		std::string	getName(void) const;
		std::string	getTarget(void) const;
		bool		getIsSigned(void) const;
		int			getRequiredGradeToSign(void) const;
		int			getRequiredGradeToExecute(void) const;

		/** Exceptions **/
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		/** Operators **/
		friend std::ostream& operator<<(std::ostream &os, AForm const &form);
};

std::ostream &operator<<(std::ostream &os, AForm const &form);

#endif