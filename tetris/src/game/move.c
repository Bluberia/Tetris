/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** move at left or right
*/

#include "proto.h"

void move_left(game_t *info)
{
	int col = 0;

	for (; col < (info->map[1] - 1); col++) {
		for (int y = 0; y < (info->map[0] - 1); y++) {
			info->calc[y][col] = info->calc[y][col + 1];
		}
	}
	for (int i = 0; i < (info->map[0] - 1); i++) {
		info->calc[i][col] = 0;
	}
}

void move_right(game_t *info)
{
	for (int col = info->map[1] - 1; col > 0; col--) {
		for (int y = 0; y < (info->map[0] - 1); y++) {
			info->calc[y][col] = info->calc[y][col - 1];
		}
	}
	for (int i = 0; i < (info->map[0] - 1); i++) {
		info->calc[i][0] = 0;
	}
}
