##
## EPITECH PROJECT, 2021
## my_ls
## File description:
## Makefile
##

SRC		= 	$(wildcard *.c **/*.c)

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-g3

NAME	=	push_swap

all: $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -Iinclude/ -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all