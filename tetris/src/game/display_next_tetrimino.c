/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display_next_tetrimino
*/

#include <unistd.h>
#include <stdlib.h>
#include "proto.h"
#include "my.h"

int display_shape_next(int i, game_t *info)
{
	int width = 5;
	int height = 1;

	mvprintw(0, i, "/next");
	for (; (width - 1) < (info->status.max_width * 2); width++)
		mvprintw(0, (i + width), "-");
	mvprintw(0, (i + width), "\\");
	for (; (height - 1) < info->status.max_height; height++) {
		mvprintw(height, i, "|");
		mvprintw(height, (i + width), "|");
	}
	mvprintw(height, i, "\\");
	for (int y = 1; y < width; y++)
		mvprintw(height, (i + y), "-");
	mvprintw(height, (i + width), "/");
	return (width);
}

void display_next_tetrimino(game_t *info)
{
	int i = (info->status.nb_column + 40);
	int pos = 1;
	int width = display_shape_next(i, info);
	int next = info->data.next;
	int w = 0;

	attron(COLOR_PAIR(info->data.color[next]));
	for (int y = 0; info->data.tetriminos[next][y] \
!= NULL; y++) {
		for (int z = 0; info->data.tetriminos[next][y][z] != '\0'; \
z++, w++) {
			mvprintw(pos, (i + w + 1), "%c", \
info->data.tetriminos[next][y][z]);
			w++;
			mvprintw(pos, (i + w + 1), "%c", ' ');
		}
		w = 0;
		pos++;
	}
	info->status.nb_column = (i + width);
}
