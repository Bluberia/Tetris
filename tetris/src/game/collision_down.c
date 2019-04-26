/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** manage collision down
*/

#include "proto.h"
#include "my.h"
#include <unistd.h>

void find_max_row_for_check(game_t *info, int i, int y, int *max_rows)
{
	if (info->calc[i][y] != 0)
		if (i > *max_rows)
			*max_rows = i;
}

int is_there_star(int *row)
{
	for (int i = 0; row[i] != -1; i++) {
		if (row[i] != 0)
			return (1);
	}
	return (0);
}

int check_collisions_with_other_tetriminos(game_t *info)
{
	int y = 0;
	int i = 0;

	for (; info->calc[i] != NULL; i++) {
		if (is_there_star(info->calc[i]) == 1)
			y = i;
	}
	for (int x = 0; info->calc[y][x] != -1; x++) {
		if (info->calc[y][x] != 0 && info->ground[y + 1][x] != 0)
			return (1);
	}
	return (0);
}

int collision_down(game_t *info)
{
	int max_rows = 0;

	for (int i = 0; info->calc[i] != NULL; i++)
		for (int y = 0; info->calc[i][y] != -1; y++)
			find_max_row_for_check(info, i, y, &max_rows);
	if (max_rows == info->map[0] - 1)
		return (1);
	if (check_collisions_with_other_tetriminos(info) == 1)
		return (1);
	return (0);
}
