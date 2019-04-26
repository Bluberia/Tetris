/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** find value max
*/

#include "proto.h"

void find_value_max(game_t *info, int *max_row, int *max_col)
{
	for (int i = 0; info->calc[i] != NULL; i++) {
		for (int y = 0; info->calc[i][y] != -1; y++) {
			find_max_row_for_check(info, i, y, max_row);
			find_max_col_for_check(info, i, y, max_col);
		}
	}
}
