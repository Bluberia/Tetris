/*
** EPITECH PROJECT, 2017
** tetris
** File description:
** pause the game
*/

#include "proto.h"

void set_pause(game_t *info)
{
	while (1) {
		mvprintw(5, 30, "Game is paused. Press pause key to continue");
		if (key_press_or_not(info) == 21)
			break;
	}
}
