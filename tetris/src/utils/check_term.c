/*
** EPITECH PROJECT, 2017
** tetris
** File description:
**  check if terminal is large enough
*/

#include "proto.h"
#include <ncurses.h>
#include <unistd.h>

int check_term(game_t *info)
{
	if (info->status.nb_column > COLS || info->status.nb_lines > LINES) {
		write(2, "Map is too big for your terminal, \
please enlarge it\n", 53);
		return (ERROR);
	}
	return (0);
}