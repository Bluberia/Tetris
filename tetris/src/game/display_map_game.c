/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display_next_tetrimino
*/

#include "proto.h"

void display_shape_game(game_t *info, int *i, int *y)
{
	mvprintw(0, 35, "+");
	while (*i < (info->map[1] * 2)) {
		mvprintw(0, (36 + *i), "-");
		*i += 1;
	}
	mvprintw(0, (36 + *i), "+");
	while (*y < info->map[0]) {
		mvprintw((*y + 1), 35, "|");
		mvprintw((*y + 1), (36 + *i), "|");
		*y += 1;
	}
	*i = 0;
	mvprintw((*y + 1), 35, "+");
	while (*i < (info->map[1] * 2)) {
		mvprintw((*y + 1), (36 + *i), "-");
		*i += 1;
	}
	mvprintw((*y + 1), (36 + *i), "+");
}

void display_map_game(game_t *info)
{
	int i = 0;
	int y = 0;

	attron(COLOR_PAIR(7));
	display_shape_game(info, &i, &y);
	info->status.nb_column = (i + 1);
	if (info->status.nb_lines < (y + 1))
		info->status.nb_lines = (y + 1);
}
