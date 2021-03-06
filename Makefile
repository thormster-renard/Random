CFLAGS= -W -Wall -ansi -pedantic -Wextra -Werror
#CFLAGS= -g3

NAME=	random

SRC=	$(wildcard *.c)

OBJ=	$(SRC:.c=.o)

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	clean fclean all
