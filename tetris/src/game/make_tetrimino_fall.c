/*
** EPITECH PROJECT, 2017
** tetris
** File description:
** make tetriminos fall
*/

#include <unistd.h>
#include "proto.h"

void fallin_tetrimino(game_t *info)
{
	static int saved = 0;
	time_t actual = time(NULL);
	int time = (actual - info->data.time);
	int i = 0;

	if (time != saved) {
		for (int row = info->map[0] - 1; row > 0; row--)
			for (int y = 0; info->calc[row][y] != -1; y++)
				info->calc[row][y] = info->calc[row - 1][y];
		for (; i < info->map[1]; i++)
			info->calc[0][i] = 0;
		info->calc[0][i] = -1;
		saved = time;
	}
}
