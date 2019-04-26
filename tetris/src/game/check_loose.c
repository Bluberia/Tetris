/*
** EPITECH PROJECT, 2017
** tetris
** File description:
**  check if it's loose or not n display
*/

#include <ncurses.h>
#include "proto.h"

void display_end_screen(game_t *info)
{
	int key = 0;

	mvprintw(10, (info->map[0] + 42), "Your score is %lu", \
info->data.score);
	mvprintw(12, (info->map[0] + 42), "Press space to quit");
	while (key != ' ')
		key = getch();
}

int check_top_and_bottom(int y, int x, int i, game_t *info)
{
	if (info->calc[y][x] != 0 && info->ground[y + 1][x] != 0)
		if (info->calc[i][x] != 0 && info->ground[i][x] != 0)
			return (1);
	return (0);
}

int is_game_finished(game_t *info)
{
	int y = 0;
	int i = 0;
	int win = 0;

	for (int j = 0; info->calc[j] != NULL; j++) {
		if (is_there_star(info->calc[j]) == 1)
			y = j;
	}
	for (; info->calc[i] != NULL; i++)
		if (is_there_star(info->calc[i]) == 1)
			break;
	for (int x = 0; info->calc[y][x] != -1 && info->calc[i][x] != -1; \
x++) {
		if (check_top_and_bottom(y, x, i, info) == 1)
			win = 1;
	}
	if (win == 1) {
		display_end_screen(info);
		return (1);
	}
	return (0);
}
