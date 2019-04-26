/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** start tetris
*/

#include <unistd.h>
#include "my.h"
#include "proto.h"

void move_one_row_down(game_t *info, int row)
{
	for (; row > 0; row -= 1) {
		for (int i = 0; info->ground[row][i] != -1; i++)
			info->ground[row][i] = info->ground[row -1][i];
	}
}

void check_score(game_t *info)
{
	int max_row = 0;
	int max_col = 0;
	int i = 0;

	for (; info->ground[max_row] != NULL; max_row++);
	max_row -= 1;
	for (; info->ground[max_row][max_col] != -1; max_col++);
	for (; info->ground[max_row][i] != 0 && i < max_col; i++);
	if (i == max_col) {
		info->data.score += 100;
		move_one_row_down(info, max_row);
	}
}

int game_loop(game_t *info)
{
	int key = 0;

	while (1) {
		if (check_term(info) == ERROR)
			break;
		display_game(info);
		refresh();
		if (is_game_finished(info) == 1)
			break;
		check_score(info);
		key = key_press_or_not(info);
		if (key == 27) {
			endwin();
			return (0);
		}
		if (key == 21)
			set_pause(info);
		key = 0;
	}
	endwin();
	return (0);
}

int tetris(game_t *info)
{
	initscr();
	curs_set(0);
	noecho();
	keypad(stdscr, TRUE);
	if (has_colors() == FALSE || can_change_color() == FALSE) {
		endwin();
		my_printf("Your terminal doesn't support color\n");
		return (ERROR);
	}
	start_color();
	init_all_pair();
	return (game_loop(info));
}
