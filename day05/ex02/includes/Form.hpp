#ifndef DEF_FORM_HPP
# define DEF_FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat; 

class Form {
	private:
		std::string	const _name;
		bool	_isSigned;
		int		_requiredGradeToSign;
		int		_requiredGradeToExecute;
	public:
		Form(void);
		Form(std::string const & name, int requiredGradeToSign, int requiredGradeToExecute);
		Form(Form const & form);
		virtual ~Form(void) = 0;
		Form &operator=(Form const &form);

		/** Member functions **/
		void	beSigned(Bureaucrat const &bureaucrat);

		/** Getters */
		std::string	getName(void) const;
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
		friend std::ostream& operator<<(std::ostream &os, Form const &form);
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif