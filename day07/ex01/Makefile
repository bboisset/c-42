NAME =	iter

SRCS =	main.cpp


DEPS =	includes/iter.hpp

SRCSDIR = sources

SRCS := $(addprefix $(SRCSDIR)/, $(SRCS))

OBJSRCS = $(SRCS:.cpp=.o)

CC = c++

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