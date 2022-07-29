NAME =	convert

SRCS =	main.cpp \
		convert.cpp \
		getType.cpp \
		handleNanInf.cpp

TESTSSRCS = tests.cpp \
			convert.cpp \
			getType.cpp \
			handleNanInf.cpp

DEPS =	includes/convert.hpp

SRCSDIR = sources

SRCS := $(addprefix $(SRCSDIR)/, $(SRCS))
TESTSSRCS := $(addprefix $(SRCSDIR)/, $(TESTSSRCS))

OBJSRCS = $(SRCS:.cpp=.o)

TESTOBJSRCS = $(TESTSSRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJSRCS) $(DEPS)
	@echo "\033[33m[Compiliation in progress...]\033"
	$(CC) $(CFLAGS) $(OBJSRCS) -o $(NAME)
	@echo "\033[32m[Success !]"

test: $(TESTOBJSRCS) $(DEPS)
	@echo "\033[33m[Test in progress...]\033"
	$(CC) $(CFLAGS) $(TESTOBJSRCS) -o $(NAME)_test
	@echo "\033[32m[Success! Running test...]\033[38;5;15m"
	@./$(NAME)_test

all: $(NAME) test

clean:
	rm -f $(OBJSRCS)
	rm -f $(TESTOBJSRCS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME)_test

re: fclean all

.PHONY: all re clean fclean