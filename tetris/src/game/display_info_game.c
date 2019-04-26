/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display info of the game
*/

#include "proto.h"
#include "my.h"

void display_shape_info(void)
{
	mvprintw(7, 0, "/-----------------------------\\");
	mvprintw(8, 0, "|");
	mvprintw(8, 30, "|");
	mvprintw(9, 0, "|");
	mvprintw(9, 30, "|");
	mvprintw(10, 0, "|");
	mvprintw(10, 30, "|");
	mvprintw(11, 0, "|");
	mvprintw(11, 30, "|");
	mvprintw(12, 0, "|");
	mvprintw(12, 30, "|");
	mvprintw(13, 0, "|");
	mvprintw(13, 30, "|");
	mvprintw(14, 0, "|");
	mvprintw(14, 30, "|");
	mvprintw(15, 0, "|");
	mvprintw(15, 30, "|");
	mvprintw(16, 0, "|");
	mvprintw(16, 30, "|");
	mvprintw(17, 0, "\\-----------------------------/");
}

void display_informations(game_t *info)
{
	time_t actual = time(NULL);

	mvprintw(9, 2, "High score");
	mvprintw(9, 17, int_to_string(info->data.high_score));
	mvprintw(10, 2, "Score");
	mvprintw(10, 17, int_to_string(info->data.score));
	mvprintw(12, 2, "Lines");
	mvprintw(12, 17, int_to_string(info->data.line));
	mvprintw(13, 2, "Level");
	mvprintw(13, 17, info->level);
	mvprintw(15, 2, "Timer");
	mvprintw(15, 17, "%ld", (actual - info->data.time));
}

void display_info_game(game_t *info)
{
	attron(COLOR_PAIR(7));
	display_shape_info();
	display_informations(info);
}
