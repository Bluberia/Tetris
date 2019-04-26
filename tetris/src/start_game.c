/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** start game
*/

#include "proto.h"
#include "my.h"

int launch_game(game_t *info)
{
	if (info->debug == true)
		if (display_debug(info) == ERROR || wait_press() == ERROR)
			return (ERROR);
	if (info->data.nb_tetriminos == 0)
		return (ERROR);
	if (init_playing_ground(info) == ERROR)
		return (ERROR);
	info->data.actual = rand() % info->data.nb_tetriminos;
	info->data.next = rand() % info->data.nb_tetriminos;
	info->data.save = info->data.actual;
	info->data.time = time(NULL);
	launch_new_tetrimino(info);
	if (tetris(info) == ERROR)
		return (ERROR);
	return (0);
}

int start_game(game_t *info, int ac, char **av)
{
	if (ac > 1) {
		if (manage_arguments(ac, av, info) == ERROR)
			return (ERROR);
		if (verify_info(info) == ERROR) {
			my_putstr("Error in your arguments.\n");
			return (ERROR);
		}
	}
	if (check_term(info) == ERROR)
		return (ERROR);
	if (fill_tetrimino_in_struct(info) == ERROR)
		return (ERROR);
	if (launch_game(info) == ERROR)
		return (ERROR);
	return (0);
}
