/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** display logo
*/

#include "proto.h"

void display_first_letters(void)
{
	attron(COLOR_PAIR(1));
	mvprintw(0, 0, "* * *");
	mvprintw(1, 2, "*");
	mvprintw(2, 2, "*");
	mvprintw(3, 2, "*");
	mvprintw(4, 2, "*");
	attron(COLOR_PAIR(4));
	mvprintw(0, 6, "* * *");
	mvprintw(1, 6, "*");
	mvprintw(2, 6, "* *");
	mvprintw(3, 6, "*");
	mvprintw(4, 6, "* * *");
	attron(COLOR_PAIR(3));
	mvprintw(0, 12, "* * *");
	mvprintw(1, 14, "*");
	mvprintw(2, 14, "*");
	mvprintw(3, 14, "*");
	mvprintw(4, 14, "*");
}

void display_end(void)
{
	attron(COLOR_PAIR(2));
	mvprintw(0, 18, "* * *");
	mvprintw(1, 18, "*   *");
	mvprintw(2, 18, "* *");
	mvprintw(3, 18, "*   *");
	mvprintw(4, 18, "*   *");
	attron(COLOR_PAIR(5));
	mvprintw(0, 24, "*");
	mvprintw(2, 24, "*");
	mvprintw(3, 24, "*");
	mvprintw(4, 24, "*");
	attron(COLOR_PAIR(6));
	mvprintw(0, 26, "* * *");
	mvprintw(1, 26, "*");
	mvprintw(2, 26, "* * *");
	mvprintw(3, 26, "    *");
	mvprintw(4, 26, "* * *");
}

void display_logo(void)
{
	display_first_letters();
	display_end();
}
