##
## EPITECH PROJECT, 2021
## Bistro
## File description:
## Makefile
##

SRC		=	$(wildcard src/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-I ./include -L ./lib/my -lmy -g3

all:	$(NAME)

$(NAME):
		make -C lib/my
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		make clean -C lib/my
		rm -f $(OBJ)

fclean:	clean
		make fclean -C lib/my
		rm -f $(NAME)
		rm -f vgcore*

re:		fclean all

.PHONY: re fclean clean all
