/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** manage collision right and left
*/

#include "proto.h"

void find_max_col_for_check(game_t *info, int i, int y, int *max_cols)
{
	if (info->calc[i][y] != 0)
		if (y > *max_cols)
			*max_cols = y;
}

int get_first_col(int *str)
{
	int j = 0;

	for (; str[j] != -1; j++) {
		if (str[j] != 0)
			break;
	}
	return (j);
}

int get_last_col(int *str, int tmp)
{
	for (int i = tmp; str[i] != -1; i++)
		if (str[i] != 0)
			return (i);
	return (tmp);
}

int collision_right(game_t *info, int tmp)
{
	int max_cols = 0;
	int row = 0;
	int l_col = 0;

	for (int i = 0; info->calc[i] != NULL; i++)
		for (int y = 0; info->calc[i][y] != -1; y++)
			find_max_col_for_check(info, i, y, &max_cols);
	if (max_cols == info->map[1] - 1)
		return (1);
	for (int j = 0; info->calc[j] != NULL; j++) {
		tmp = get_last_col(info->calc[j], tmp);
		if (j == 1)
			l_col = tmp;
		if (tmp > l_col) {
			l_col = tmp;
			row = j;
		}
	}
	if (info->ground[row][l_col + 1] != 0)
		return (1);
	return (0);
}

int collision_left(game_t *info)
{
	int f_col = 0;
	int tmp = 0;
	int row = 0;

	for (int i = 0; info->calc[i] != NULL; i++)
		if (info->calc[i][0] != 0)
			return (1);
	for (int j = 0; info->calc[j] != NULL; j++) {
		tmp = get_first_col(info->calc[j]);
		if (j == 1)
			f_col = tmp;
		if (tmp < f_col) {
			f_col = tmp;
			row = j;
		}
	}
	if (info->ground[row][f_col - 1] != 0)
		return (1);
	return (0);
}
