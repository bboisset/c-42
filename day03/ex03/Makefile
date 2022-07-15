NAME = claptrap

SRCS =	sources/main.cpp \
		sources/ClapTrap.cpp \
		sources/ScavTrap.cpp \
		sources/FragTrap.cpp \
		sources/DiamondTrap.cpp

DEPS =	includes/ClapTrap.hpp \
		includes/FragTrap.hpp \
		includes/ScavTrap.hpp \
		includes/DiamondTrap.hpp

OBJSRCS = $(SRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJSRCS) $(DEPS)
	@echo "\033[33m[Compiliation in progress...]\033"
	$(CC) $(CFLAGS) $(OBJSRCS) -o $(NAME)
	@echo "\033[32m[Success !]"

all: $(NAME)

clean:
	rm -f $(OBJSRCS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean