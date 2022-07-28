NAME =	convert

SRCS =	sources/main.cpp \
		sources/convert.cpp \
		sources/getType.cpp \
		sources/handleNanInf.cpp

TESTSSRCS = sources/tests.cpp \
			sources/convert.cpp \
			sources/getType.cpp \
			sources/handleNanInf.cpp

DEPS =	includes/convert.hpp

OBJSRCS = $(SRCS:.cpp=.o)

TESTOBJSRCS = $(TESTSSRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJSRCS) $(DEPS)
	@echo "\033[33m[Compiliation in progress...]\033"
	$(CC) $(CFLAGS) $(OBJSRCS) -o $(NAME)
	@echo "\033[32m[Success !]"

test: $(TESTOBJSRCS) $(DEPS)
	@echo "\033[33m[Test in progress...]\033"
	$(CC) $(CFLAGS) $(TESTOBJSRCS) -o $(NAME)_test
	@echo "\033[32m[Success !]"

all: $(NAME) test

clean:
	rm -f $(OBJSRCS)
	rm -f $(TESTOBJSRCS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME)_test

re: fclean all

.PHONY: all re clean fclean