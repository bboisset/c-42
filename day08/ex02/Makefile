NAME =	MutantStack

SRCS =	main.cpp

DEPS =	includes/MutantStack.hpp

SRCSDIR = sources

SRCS := $(addprefix $(SRCSDIR)/, $(SRCS))

OBJSRCS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o :
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

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