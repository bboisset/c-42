#ifndef DEF_FORM_HPP
# define DEF_FORM_HPP
# include <string>

class Form {
    private:
        std::string const _name;
        bool _signed;
        int const _grade;
        int const _requiredGrade;
    public:
        Form(void);
        Form(Form const & form);
        ~Form(void);
        Form &operator=(Form const & form);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};
#endif