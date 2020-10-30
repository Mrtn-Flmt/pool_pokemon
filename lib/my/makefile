##
## EPITECH PROJECT, 2020
## makefile
## File description:
## my makefile in c
##

SRC	=   my_isneg.c	\
		my_putchar.c 	\
		my_putstr.c 	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strncpy.c	\
		my_swap.c	

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:    $(NAME)

$(NAME):        $(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	cp my.h ../../include

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
