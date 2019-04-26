/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display all the game
*/

#include <stdlib.h>
#include "proto.h"

void reset_calc(game_t *info)
{
	int i = 0;
	int j = 0;

	while (i < info->map[0]) {
		while (j < info->map[1]) {
			info->calc[i][j] = 0;
			j++;
		}
		info->calc[i][j] = -1;
		i++;
		j = 0;
	}
	info->calc[i] = NULL;
}

void manage_result(game_t *info)
{
	int result = 0;

	result = collision_down(info);
	if (result == 1) {
		put_calc_in_ground(info);
		reset_calc(info);
		info->data.actual = info->data.next;
		info->data.next = rand() % info->data.nb_tetriminos;
		launch_new_tetrimino(info);
	}
}

void display_game(game_t *info)
{
	clear();
	display_logo();
	display_info_game(info);
	display_map_game(info);
	if (info->next == true)
		display_next_tetrimino(info);
	display_ground_and_calc(info);
	fallin_tetrimino(info);
	manage_result(info);
}
