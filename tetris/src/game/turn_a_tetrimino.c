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

void check_status_for_data(int *row, int *col, int status, int *pos)
{
	if (status == 1) {
		*row = pos[2];
		*col = pos[3];
	} else {
		*row = pos[3];
		*col = pos[2];
	}
}

int **find_old_tetri(game_t *info, int *pos, int status)
{
	int pos_x = pos[0];
	int pos_y = pos[1];
	int row = 0;
	int col = 0;
	int **old_tetri = NULL;

	check_status_for_data(&row, &col, status, pos);
	old_tetri = malloc(sizeof(int *) * (row + 1));
	if (old_tetri == NULL)
		return (NULL);
	for (int i = 0; i < row; i++) {
		old_tetri[i] = malloc(sizeof(int) * (col + 1));
		if (old_tetri[i] == NULL)
			return (NULL);
		for (int y = 0; y < col; y++)
			old_tetri[i][y] = info->calc[i + pos_x][y + pos_y];
		old_tetri[i][col] = -1;
	}
	old_tetri[row] = NULL;
	return (old_tetri);
}

int **find_new_tetri(int *pos, int **old_tetri)
{
	int row = pos[2];
	int col = pos[3];
	int tmp = col - 1;
	int **new_tetri = malloc(sizeof(int *) * (row + 1));

	if (new_tetri == NULL)
		return (NULL);
	for (int i = 0; i < row; i++) {
		new_tetri[i] = malloc(sizeof(int) * (col + 1));
		if (new_tetri[i] == NULL)
			return (NULL);
		for (int y = 0; y < col; y++) {
			new_tetri[i][y] = old_tetri[tmp][i];
			tmp--;
		}
		tmp = col - 1;
		new_tetri[i][col] = -1;
	}
	new_tetri[row] = NULL;
	return (new_tetri);
}

void verif_status(int *status, int **pos)
{
	int tmp = 0;

	if (*status == 1)
		*status = 2;
	else
		*status = 1;
	if (*status == 2) {
		tmp = (*pos)[2];
		(*pos)[2] = (*pos)[3];
		(*pos)[3] = tmp;
	}
}

int turn_tetriminos(game_t *info)
{
	static int status = 1;
	int *pos = find_pos(info);
	int **old_tetri = NULL;
	int **new_tetri = NULL;

	if (pos == NULL)
		return (ERROR);
	find_size_tetri(info, &pos);
	if ((info->map[1] - 1) > (pos[1] + pos[3])) {
		old_tetri = find_old_tetri(info, pos, status);
		if (old_tetri == NULL)
			return (ERROR);
		verif_status(&status, &pos);
		new_tetri = find_new_tetri(pos, old_tetri);
		if (new_tetri == NULL)
			return (ERROR);
		make_new_in_calc(info, new_tetri, pos);
	}
	return (0);
}
