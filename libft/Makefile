NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = libft.h
LIBOPT = ar rcs
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(LIBOPT) $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

so:
	$(CC) -c $(CFLAGS) -fPIC $(SRC)
	gcc -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re


