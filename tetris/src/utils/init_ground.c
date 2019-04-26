/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** init_ground
*/

#include <stdlib.h>
#include <unistd.h>
#include "proto.h"
#include "my.h"

int init_calc(game_t *info)
{
	int i = 0;
	int j = 0;

	info->calc = malloc(sizeof(int *) * (info->map[0] + 1));
	if (info->calc == NULL)
		return (ERROR);
	while (i < info->map[0]) {
		info->calc[i] = malloc(sizeof(int) * (info->map[1] + 1));
		if (info->calc[i] == NULL)
			return (ERROR);
		while (j < info->map[1]) {
			info->calc[i][j] = 0;
			j++;
		}
		info->calc[i][j] = -1;
		i++;
		j = 0;
	}
	info->calc[i] = NULL;
	return (0);
}

int init_playing_ground(game_t *info)
{
	int i = 0;
	int j = 0;

	info->ground = malloc(sizeof(int *) * (info->map[0] + 1));
	if (info->ground == NULL)
		return (ERROR);
	while (i < info->map[0]) {
		info->ground[i] = malloc(sizeof(int) * (info->map[1] + 1));
		if (info->ground[i] == NULL)
			return (ERROR);
		while (j < info->map[1]) {
			info->ground[i][j] = 0;
			j++;
		}
		info->ground[i][j] = -1;
		i++;
		j = 0;
	}
	info->ground[i] = NULL;
	return (init_calc(info));
}
