/*
** EPITECH PROJECT, 2017
** tetris
** File description:
** launch a new tetrimino
*/

#include <unistd.h>
#include "proto.h"

int find_max_col(game_t *info)
{
	int tmp = 0;
	int max_col = 0;

	for (int i = 0; info->data.tetriminos[info->data.actual][i] != NULL; \
i++) {
		tmp = find_size_x(info->data.tetriminos[info->data.actual][i]);
		if (tmp > max_col)
			max_col = tmp;
	}
	return (max_col);
}

void launch_new_tetrimino(game_t *info)
{
	int nbr = info->data.actual;
	int y = (info->map[1] / 2) - (find_max_col(info) / 2);

	for (int i = 0; info->data.tetriminos[nbr][i] != NULL; i++) {
		for (int j = 0; info->data.tetriminos[nbr][i][j] != '\0'; j++)
			if (info->data.tetriminos[nbr][i][j] != ' ')
				info->calc[i][j + y] = info->data.color[nbr];
	}
}
