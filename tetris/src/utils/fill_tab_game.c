/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** fill tab game
*/

#include <stdlib.h>
#include <term.h>
#include "proto.h"
#include "my.h"

void fill_map(game_t *info)
{
	info->map[0] = 20;
	info->map[1] = 10;
}

int prepare_key_info(game_t *info)
{
	int i;

	if (setupterm(NULL, 0, &i) < 0)
		return (ERROR);
	info->left = tigetstr("kcub1");
	info->right = tigetstr("kcuf1");
	info->turn = tigetstr("kcuu1");
	info->drop = tigetstr("kcud1");
	if (!(info->left) || !(info->right) || !(info->turn) || !(info->drop))
		return (ERROR);
	return (0);
}

void fill_data_game(game_t *info)
{
	info->data.high_score = 0;
	info->data.score = 0;
	info->data.line = 0;
	info->data.nb_tetriminos = 0;
	info->data.tetriminos = NULL;
	info->data.color = NULL;
	info->data.actual = 0;
	info->data.next = 0;
	info->data.save = 0;
}

void fill_status_game(game_t *info)
{
	info->status.win = false;
	info->status.lose = false;
	info->status.nb_column = 0;
	info->status.nb_lines = 17;
	info->status.max_width = 0;
	info->status.max_height = 0;
}

int fill_tab_game(game_t *info)
{
	if (prepare_key_info(info) == ERROR)
		return (ERROR);
	info->level = "1";
	info->quit = "q";
	info->pause = " ";
	info->map = malloc(sizeof(int) * 2);
	if (info->map == NULL)
		return (ERROR);
	fill_map(info);
	info->next = true;
	info->debug = false;
	fill_data_game(info);
	fill_status_game(info);
	info->ground = NULL;
	info->calc = NULL;
	return (0);
}
