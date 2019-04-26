/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** manage argument to tetris
*/

#include "proto.h"

int manage_arguments(int ac, char **av, game_t *info)
{
	struct option options[] = {{"level=", 1, 0, 'L'},
{"key-left=", 1, 0, 'l'},
{"key-right=", 1, 0, 'r'},
{"key-turn=", 1, 0, 't'},
{"key-drop=", 1, 0, 'd'},
{"key-quit=", 1, 0, 'q'},
{"key-pause=", 1, 0, 'p'},
{"map-size=", 1, 0, 0},
{"without-next", 0, 0, 'w'},
{"debug", 0, 0, 'D'},
{0, 0, 0, 0}};

	if (analyse_arguments(ac, av, info, options) == ERROR)
		return (ERROR);
	return (0);
}
