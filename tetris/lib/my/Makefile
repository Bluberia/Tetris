 ##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## compiles my libmy
##

NAME	=	libmy.a

SRC_DIR	=	printf_src/

GNL_DIR	=	get_next_line_src/

SRC	=	my_getnbr.c				\
		my_putchar.c				\
		my_put_nbr.c				\
		my_epurstr.c				\
		my_putstr.c				\
		my_revstr.c				\
		my_show_word_array.c			\
		my_strcat.c				\
		my_strcmp.c				\
		my_strcpy.c				\
		my_strdup.c				\
		my_str_isalpha.c			\
		my_str_isnum.c				\
		my_str_isprintable.c			\
		my_strlen.c				\
		my_strlowcase.c				\
		my_strncat.c				\
		my_strncmp.c				\
		my_strncpy.c				\
		my_strstr.c				\
		my_str_to_word_array.c			\
		my_strupcase.c				\
		my_swap.c				\
		my_putnbr_base.c			\
		my_printf.c				\
		my_putstr_nonprint.c			\
		my_putnbr_base.c			\
		my_realloc.c				\
		$(SRC_DIR)check_existing.c		\
		$(SRC_DIR)conversion.c			\
		$(SRC_DIR)my_putlong_base.c		\
		$(SRC_DIR)conversion2.c			\
		$(SRC_DIR)conversion3.c			\
		$(SRC_DIR)count_flags.c			\
		$(SRC_DIR)manage_diese.c		\
		$(SRC_DIR)manage_plus.c			\
		$(SRC_DIR)manage_space.c		\
		$(SRC_DIR)manage_flag_int.c		\
		$(SRC_DIR)redirect.c			\
		$(SRC_DIR)void_hexa.c			\
		$(SRC_DIR)put_convert_int_char.c	\
		$(SRC_DIR)my_putnbr_unsigned.c		\
		$(SRC_DIR)manage_flag_unsignedint.c	\
		$(GNL_DIR)str_dup_cat.c			\
		$(GNL_DIR)my_strlim.c			\
		$(GNL_DIR)get_next_line.c		\
		$(GNL_DIR)strcut.c

CFLAGS	=	-W -Wall -Wextra -I ../../include -I ../../include/printf

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

AR	=	ar rc

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(AR) $(NAME) $(OBJ)
		@echo "COMPILATION COMPLETE"

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(OBJS)
		@echo "CLEAR COMPLETED"

re:		fclean all
