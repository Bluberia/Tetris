##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Compile our projects
##

NAME	=	tetris

SRC_DIR	=	./src/

UTILS_DIR	=	./src/utils/

DEBUG_DIR	=	./src/debug/

GAME_DIR	=	./src/game/

SRC	=	$(SRC_DIR)main.c			\
		$(SRC_DIR)tetris.c			\
		$(SRC_DIR)global.c			\
		$(SRC_DIR)start_game.c			\
		$(SRC_DIR)display_game.c		\
		$(DEBUG_DIR)tetriminos.c		\
		$(DEBUG_DIR)found_name.c		\
		$(DEBUG_DIR)check_tetriminos.c		\
		$(DEBUG_DIR)find_file_tetriminos.c	\
		$(DEBUG_DIR)display_tetriminos.c	\
		$(DEBUG_DIR)fill_path.c			\
		$(DEBUG_DIR)wait_press.c		\
		$(DEBUG_DIR)display_debug.c		\
		$(DEBUG_DIR)find_file.c			\
		$(UTILS_DIR)fill_tetriminos.c		\
		$(UTILS_DIR)fill_tetrimino_in_struct.c	\
		$(UTILS_DIR)fill_tab_game.c		\
		$(UTILS_DIR)display_help.c		\
		$(UTILS_DIR)manage_arguments.c		\
		$(UTILS_DIR)launch_new_tetrimino.c	\
		$(UTILS_DIR)analyse_arguments.c		\
		$(UTILS_DIR)verify_optind.c		\
		$(UTILS_DIR)check_term.c		\
		$(UTILS_DIR)verify_info.c		\
		$(UTILS_DIR)find_last_point.c		\
		$(UTILS_DIR)change_time.c		\
		$(UTILS_DIR)key_press_or_not.c		\
		$(UTILS_DIR)pause.c			\
		$(UTILS_DIR)my_memset.c			\
		$(UTILS_DIR)put_calc_in_ground.c	\
		$(UTILS_DIR)find_value.c		\
		$(UTILS_DIR)int_to_string.c		\
		$(UTILS_DIR)init_ground.c		\
		$(UTILS_DIR)verif_echap.c		\
		$(GAME_DIR)display_logo.c		\
		$(GAME_DIR)display_map_game.c		\
		$(GAME_DIR)display_next_tetrimino.c	\
		$(GAME_DIR)delete_all_pair.c		\
		$(GAME_DIR)init_all_pair.c		\
		$(GAME_DIR)display_info_game.c		\
		$(GAME_DIR)display_ground_and_calc.c	\
		$(GAME_DIR)make_tetrimino_fall.c	\
		$(GAME_DIR)turn_a_tetrimino.c		\
		$(GAME_DIR)check_loose.c		\
		$(GAME_DIR)move.c			\
		$(GAME_DIR)collision_down.c		\
		$(GAME_DIR)collision_right_and_left.c	\
		$(GAME_DIR)find_pos_size.c		\
		$(GAME_DIR)make_new_in_calc.c

CFLAGS	=	-W -Wall -Wextra -I ./include -I ./include/printf

OBJ	=	$(SRC:%.c=%.o)

LIB	=	-L ./lib/my -lmy -lncurses

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ./lib/my/
		$(CC) -o $(NAME) $(OBJ) $(LIB)
		@echo "COMPILATION COMPLETED"

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		$(MAKE) clean -C ./lib/my
		@echo "CLEAR COMPLETED"

re:		fclean all

debug:		CFLAGS += -g
debug:		re
