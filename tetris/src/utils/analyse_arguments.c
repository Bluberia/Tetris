/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** analyse argument to tetris
*/

#include "proto.h"
#include "my.h"

int find_map_size(game_t *info)
{
	char *nb = malloc(sizeof(char) * my_strlen(optarg));
	int i = 0;
	int y = 0;

	for (; optarg[i] != ',' && optarg[i] != '\0'; i++)
		nb[i] = optarg[i];
	nb[i] = '\0';
	if (optarg[i] != ',')
		return (ERROR);
	i++;
	info->map[0] = my_getnbr(nb);
	for (; optarg[i] != ',' && optarg[i] != '\0'; i++) {
		nb[y] = optarg[i];
		y++;
	}
	nb[y] = '\0';
	if (optarg[i] != '\0')
		return (ERROR);
	info->map[1] = my_getnbr(nb);
	free(nb);
	return (0);
}

int analyse_second_part_c(int c, game_t *info)
{
	switch (c) {
	case 'q':
		info->quit = optarg;
		return (1);
	case 'p':
		info->pause = optarg;
		return (1);
	case 'w':
		info->next = false;
		return (1);
	case 'D':
		info->debug = true;
		return (1);
	case '?':
		return (0);
	default:
		my_printf("Unknown character : %c\n", c);
		return (0);
	}
}

int analyse_first_part_c(char c, game_t *info)
{
	switch (c) {
	case 'L':
		info->level = optarg;
		return (1);
        case 'l':
		info->left = optarg;
		return (1);
	case 'r':
		info->right = optarg;
		return (1);
	case 't':
		info->turn = optarg;
		return (1);
	case 'd':
		info->drop = optarg;
		return (1);
	default:
		return (analyse_second_part_c(c, info));
	}
}

int start_switch(char c, game_t *info)
{
	switch (c) {
	case 0:
		if (find_map_size(info) == ERROR)
			return (ERROR);
		break;
	default:
		if (analyse_first_part_c(c, info) == 1)
			break;
		else
			return (ERROR);
	}
	return (0);
}

int analyse_arguments(int ac, char **av, game_t *info, struct option *options)
{
	int index = 0;
	char c = getopt_long(ac, av, "L:l:r:t:d:q:p:wD", options, &index);

	while (c != -1) {
		if (start_switch(c, info) == ERROR)
			return (ERROR);
		c = getopt_long(ac, av, "L:l:r:t:d:q:p:wD", options, &index);
	}
	if (verify_optind(ac) == ERROR)
		return (ERROR);
	return (0);
}
