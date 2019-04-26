/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display_ground
*/

#include "proto.h"

void display_ground(game_t *info, int i)
{
	int space = 0;

	for (int y = 0; info->ground[i][y] != -1; y++) {
		if (info->ground[i][y] != 0) {
			attron(COLOR_PAIR(info->ground[i][y]));
			mvprintw((i + 1), (36 + space), "%c", '*');
		}
		space += 2;
	}
}

void display_calc(game_t *info, int i)
{
	int space = 0;

	for (int y = 0; info->ground[i][y] != -1; y++) {
		if (info->calc[i][y] != 0) {
			attron(COLOR_PAIR(info->calc[i][y]));
			mvprintw((i + 1), (36 + space), "%c", '*');
		}
		space += 2;;
	}
}

void display_ground_and_calc(game_t * info)
{
	for (int i = 0; info->ground[i] != NULL; i++) {
		display_ground(info, i);
		display_calc(info, i);
	}
	fallin_tetrimino(info);
}
