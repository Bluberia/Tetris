/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** main
*/

#include <time.h>
#include "proto.h"
#include "my.h"

int main(int ac, char **av)
{
	game_t info;

	if (ac == 2 && my_strcmp(av[1], "--help") == 0) {
		display_help(av[0]);
		return (0);
	}
	srand(time(NULL));
	if (fill_tab_game(&info) == ERROR)
		return (ERROR);
	if (start_game(&info, ac, av) == ERROR)
		return (ERROR);
	delete_all_pair();
	return (0);
}
