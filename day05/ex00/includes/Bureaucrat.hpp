#ifndef DEF_BUREAUCRAT_HPP
# define DEF_BUREAUCRAT_HPP
# include <string>
# include <iostream>

class Bureaucrat {
	private:
		std::string const	_name;
		int	_authorizationLevel;
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & bureaucrat);
		~Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const &bureaucrat);

		Bureaucrat(std::string const & name, int authorizationLevel);
		std::string getName(void) const;
		int getGrade(void) const;
		void setAuthorizationLevel(int authorizationLevel);
		int	increaseGrade(void);
		int	decreaseGrade(void);
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		friend std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif