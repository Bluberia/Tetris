/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** start tetris
*/

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "my.h"
#include "proto.h"

int change_term(int i)
{
	static struct termios old;
	static struct termios new;

	if (i == 0) {
		if (ioctl(0, TCGETS, &old) == -1 || \
ioctl(0, TCGETS, &new) == -1)
			return (ERROR);
		new.c_lflag &= ~ECHO;
		new.c_lflag &= ~ICANON;
		new.c_cc[VMIN] = 0;
		new.c_cc[VTIME] = 1;
		if (ioctl(0, TCSETS, &new) == -1)
			return (ERROR);
	}
	if (i == 1) {
		if (ioctl(0, TCSETS, &old) == -1)
			return (ERROR);
	}
	return (0);
}

void drop_it(game_t *info)
{
	int max_row = 0;

	for (int i = 0; info->calc[i] != NULL; i++, max_row++);
	max_row -= 1;
	for (; max_row > 0; max_row -=1) {
		for (int i = 0; info->calc[max_row][i] != -1; i++)
			info->calc[max_row][i] = info->calc[max_row -1][i];
	}
	for (int i = 0; info->calc[0][i] != -1; i++)
		info->calc[0][i] = 0;
}

int check_key(game_t *info, char *buff)
{
	if (my_strcmp(buff, info->left) == 0)
		if (collision_left(info) != 1)
			move_left(info);
	if (my_strcmp(buff, info->right) == 0)
		if (collision_right(info, 0) != 1)
			move_right(info);
	if (my_strcmp(buff, info->turn) == 0)
		if (turn_tetriminos(info) == ERROR)
			return (ERROR);
	if (my_strcmp(buff, info->drop) == 0)
		drop_it(info);
	return (0);
}

int key_press_or_not(game_t *info)
{
	char buff[100];
	int nb_lu = 0;

	change_term(0);
	my_memset(buff, '\0');
	nb_lu = read(0, buff, 100);
	change_term(1);
	if (nb_lu == -1)
		return (ERROR);
	buff[nb_lu] = 0;
	if (check_key(info, buff) == ERROR)
		return (ERROR);
	if (my_strcmp(buff, info->quit) == 0) {
		my_memset(buff, '\0');
		return (27);
	}
	if (my_strcmp(buff, info->pause) == 0) {
		my_memset(buff, '\0');
		return (21);
	}
	return (0);
}
