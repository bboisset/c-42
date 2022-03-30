NAME = a.out 

SRCS =	sources/main.cpp \
		sources/Fixed.cpp

OBJSRCS = $(SRCS:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJSRCS)
	@echo "\033[33m[Compiliation in progress...]\033"
	$(CC) $(CFLAGS) $(OBJSRCS) -o $(NAME)
	@echo "\033[32m[Success !]\"

all: $(NAME)

#TODO utilité ?
#.cpp.o:
#	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJSRCS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean