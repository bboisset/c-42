NAME = betterSed

SRCS =	sources/main.cpp \
		sources/replace_file.cpp \
		sources/utils.cpp

TESTSRCS =	sources/test.cpp \
			sources/replace_file.cpp \
			sources/utils.cpp

DEPS = includes/betterSed.hpp

OBJSRCS = $(SRCS:.cpp=.o)

TEST_OBJSRCS = $(TESTSRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJSRCS) $(DEPS)
	@echo "\033[33m[Compiliation in progress...]\033"
	$(CC) $(CFLAGS) $(OBJSRCS) -o $(NAME)
	@echo "\033[32m[Success !]"

test: $(TEST_OBJSRCS) $(DEPS)
	@echo "\033[33m[Compiliation in progress...]\033"
	$(CC) $(CFLAGS) $(TEST_OBJSRCS) -o $(NAME)_test
	@echo "\033[32m[Success !]"

all: $(NAME) test

clean:
	rm -f $(OBJSRCS)
	rm -f $(TEST_OBJSRCS)
	rm -f data/*.replace

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME)_test

re: fclean all

.PHONY: all re clean fclean test