/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** analyse argument to tetris
*/

#include "proto.h"
#include "my.h"

int verify_optind(int ac)
{
	if (optind < ac) {
		my_putstr("Error in your arguments\n");
		return (ERROR);
	}
	return (0);
}
