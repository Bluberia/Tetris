/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** verify info of tetris
*/

#include "proto.h"
#include "my.h"

int verify_diff_first(game_t info)
{
	if (my_strcmp(info.level, info.left) == 0)
		return (ERROR);
	if (my_strcmp(info.level, info.right) == 0)
		return (ERROR);
	if (my_strcmp(info.level, info.turn) == 0)
		return (ERROR);
	if (my_strcmp(info.level, info.drop) == 0)
		return (ERROR);
	if (my_strcmp(info.level, info.quit) == 0)
		return (ERROR);
	if (my_strcmp(info.level, info.pause) == 0)
		return (ERROR);
	if (my_strcmp(info.left, info.right) == 0)
		return (ERROR);
	if (my_strcmp(info.left, info.turn) == 0)
		return (ERROR);
	if (my_strcmp(info.left, info.drop) == 0)
		return (ERROR);
	return (0);
}

int verify_diff_second(game_t info)
{
	if (my_strcmp(info.left, info.quit) == 0)
		return (ERROR);
	if (my_strcmp(info.left, info.pause) == 0)
		return (ERROR);
	if (my_strcmp(info.right, info.turn) == 0)
		return (ERROR);
	if (my_strcmp(info.right, info.drop) == 0)
		return (ERROR);
	if (my_strcmp(info.right, info.quit) == 0)
		return (ERROR);
	if (my_strcmp(info.right, info.pause) == 0)
		return (ERROR);
	return (0);
}

int verify_diff_third(game_t info)
{
	if (my_strcmp(info.turn, info.drop) == 0)
		return (ERROR);
	if (my_strcmp(info.turn, info.quit) == 0)
		return (ERROR);
	if (my_strcmp(info.turn, info.pause) == 0)
		return (ERROR);
	if (my_strcmp(info.drop, info.quit) == 0)
		return (ERROR);
	if (my_strcmp(info.drop, info.pause) == 0)
		return (ERROR);
	if (my_strcmp(info.quit, info.pause) == 0)
		return (ERROR);
	return (0);
}

void verif_all(game_t *info)
{
	verif_echap(info->level);
	verif_echap(info->left);
	verif_echap(info->right);
	verif_echap(info->turn);
	verif_echap(info->drop);
	verif_echap(info->quit);
	verif_echap(info->pause);
}

int verify_info(game_t *info)
{
	if (my_getnbr(info->level) < 1)
		return (ERROR);
	if (info->map[0] < info->status.max_height || \
info->map[1] < info->status.max_width)
		return (ERROR);
	verif_all(info);
	if (verify_diff_first(*info) == ERROR)
		return (ERROR);
	if (verify_diff_second(*info) == ERROR)
		return (ERROR);
	if (verify_diff_third(*info) == ERROR)
		return (ERROR);
	return (0);
}
