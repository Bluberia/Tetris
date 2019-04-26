/*
** EPITECH PROJECT, 2017
** tetris
** File description:
** turn a tetrimino in the char**
*/

#include <unistd.h>
#include <stdlib.h>
#include "proto.h"
#include "my.h"

void check_pos_un(int **pos, game_t *info, int i, int y)
{
	if (info->calc[i][y] != 0 && y < (*pos)[1])
		(*pos)[1] = y;
}

int *find_pos(game_t *info)
{
	int *pos = malloc(sizeof(int) * 4);
	int i = 0;
	int y = 0;

	if (pos == NULL)
		return (NULL);
	while (info->calc[i][y] == 0 || info->calc[i][y] == -1) {
		if (info->calc[i][y] == -1) {
			y = 0;
			i++;
		} else
			y++;
	}
	pos[0] = i;
	pos[1] = info->map[1];
	for (i = 0; info->calc[i] != NULL; i++)
		for (y = 0; info->calc[i][y] != -1; y++)
			check_pos_un(&pos, info, i, y);
	return (pos);
}

void check_col_tetri(game_t *info, int row, int i, int *col)
{
	int actual = info->data.actual;

	if (info->data.tetriminos[actual][row][i] != 0 && i > *col)
		*col = i;
}

void find_size_tetri(game_t *info, int **pos)
{
	int row = 0;
	int col = 0;
	int actual = info->data.actual;

	for (; info->data.tetriminos[actual][row] != NULL; row++) {
		for (int i = 0; info->data.tetriminos[actual][row][i] != '\0\
'; i++) {
			check_col_tetri(info, row, i, &col);
		}
	}
	(*pos)[2] = row;
	(*pos)[3] = col + 1;
}
