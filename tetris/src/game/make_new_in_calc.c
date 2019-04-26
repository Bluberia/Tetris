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

void make_new_in_calc(game_t *info, int **new_tetri, int *pos)
{
	for (int i = 0; info->calc[i] != NULL; i++) {
		for (int y = 0; info->calc[i][y] != -1; y++)
			info->calc[i][y] = 0;
	}
	for (int i = 0; i < pos[2]; i++) {
		for (int y = 0; y < pos[3]; y++) {
			info->calc[i + pos[0]][y + pos[1]] = new_tetri[i][y];
		}
	}
}
