/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** put calc in ground
*/

#include <unistd.h>
#include "proto.h"

void check_value(game_t *info, int i, int y)
{
	if (info->calc[i][y] != 0)
		info->ground[i][y] = info->calc[i][y];
}

void put_calc_in_ground(game_t *info)
{
	for (int i = 0; info->calc[i] != NULL; i++) {
		for (int y = 0; info->calc[i][y] != -1; y++) {
			check_value(info, i, y);
		}
	}
}
