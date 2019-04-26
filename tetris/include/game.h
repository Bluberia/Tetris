/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** struct for the game
*/

#ifndef __GAME_H_
#define __GAME_H_

#include <time.h>
#include <ncurses.h>

typedef struct s_game game_t;

typedef struct s_status
{
	bool win;
	bool lose;
	int nb_column;
	int nb_lines;
	int max_width;
	int max_height;
} status_t;

typedef struct s_data
{
	size_t high_score;
	size_t score;
	time_t time;
	int line;
	int nb_tetriminos;
	char ***tetriminos;
	int *color;
	int actual;
	int next;
	int save;
} data_t;

typedef struct s_game
{
	char *level;
	char *left;
	char *right;
	char *turn;
	char *drop;
	char *quit;
	char *pause;
	int *map;
	int **ground;
	int **calc;
	bool next;
	bool debug;
	data_t data;
	status_t status;
} game_t;

#endif
