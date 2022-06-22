NAME = Bureaucrat

SRCS =	sources/main.cpp \
		sources/Bureaucrat.cpp \
		sources/AForm.cpp \
		sources/ShrubberyCreationForm.cpp \
		sources/RobotomyRequestForm.cpp \
		sources/PresidentialPardonForm.cpp \

DEPS =	includes/Bureaucrat.hpp \
		includes/AForm.hpp \
		includes/ShrubberyCreationForm.hpp \
		includes/RobotomyRequestForm.hpp \
		includes/PresidentialPardonForm.hpp

OBJSRCS = $(SRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJSRCS) $(DEPS)
	@echo "\033[33m[Compiliation in progress...]\033"
	$(CC) $(CFLAGS) $(OBJSRCS) -o $(NAME)
	@echo "\033[32m[Success !]"

all: $(NAME)

#.cpp.o:
#	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJSRCS)
	rm -f *_shrubbery

fclean: clean
	rm -f $(NAME)
	rm -f *_shrubbery

re: fclean all

.PHONY: all re clean fclean