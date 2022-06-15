NAME = polymorphism

SRCS =	sources/main.cpp \
		sources/AMateria.cpp \
		sources/Character.cpp \
		sources/ICharacter.cpp \

DEPS =	includes/AMateria.hpp \
		includes/Character.hpp \
		includes/ICharacter.hpp \
		includes/Cure.hpp \
		includes/Ice.hpp \
		includes/IMateriaSource.hpp \

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

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean