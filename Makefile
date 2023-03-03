##
## EPITECH PROJECT, 2022
## B-CPE-100-LYN-1-1-cpoolday13-albert.muth
## File description:
## Makefile
##

SRC	=	src/my_printf.c \
		src/base_binary.c \
		src/base_hexa.c \
		src/base_octal.c \
		src/base_p.c \
		src/base_s.c \
		src/flags.c \
		src/my_put_nbr_pos.c \
		src/base_e.c \
		src/my_put_nbr_float.c \
		src/my_put_nbr.c \
		src/my_putchar.c \
		src/my_putstr.c \
		src/my_strcpy.c \
		src/my_strlen.c \

OBJ =	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f src/*.o

clean:
	rm -f libmy.a

fclean:	clean

re : fclean all
