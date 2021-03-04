NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = libft.h
LIBOPT = ar rcs
SRC = $(wildcard *.c)
BSRC = $(wildcard *lst*.c)
OBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(LIBOPT) $@ $^

bonus: 	$(NAME) $(BOBJS)
		$(LIBOPT) $(NAME) $^

clean:
		rm -f $(OBJS) $(BOBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re


