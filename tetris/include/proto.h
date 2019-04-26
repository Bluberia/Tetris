/*
** EPITECH PROJECT, 2017
** proto
** File description:
** all proto of program
*/

#ifndef __PROTO_H_
#define __PROTO_H_

#include <dirent.h>
#include <getopt.h>
#include "game.h"

extern const int ERROR;

void display_help(char *);
int tetris(game_t *);
int fill_tab_game(game_t *);
int display_debug(game_t *);
int tetriminos(int, char *);
char *found_name(char *);
int check_size_color_coordonnee(char *, char **, char **, int);
int find_file(void);
int display_tetriminos(char *, char *);
void fill_path(char *);
int manage_arguments(int, char **, game_t *);
int verify_info(game_t *);
int wait_press(void);
int find_nb_good_file(char **);
int find_bad_file(char **, int);
int analyse_arguments(int, char **, game_t *, struct option *);
void display_logo(void);
void delete_all_pair(void);
void init_all_pair(void);
void display_info_game(game_t *);
int start_game(game_t *, int, char **);
char *change_time(int);
int key_press_or_not(game_t*);
char *int_to_string(int);
int find_size(int);
void display_game(game_t *);
void display_next_tetrimino(game_t *);
void display_map_game(game_t *);
int is_game_finished(game_t *);
int check_term(game_t *);
int fill_tetrimino(game_t *, char *);
char **fill_name_file(DIR **);
void sort_name_file(char **, int);
int fill_tetrimino_in_struct(game_t *);
int find_last_point(char *, char);
int turn_tetriminos(game_t *);
void print_reversed_tetrimino(game_t *, int, int);
void print_tetrimino(game_t *, int, int);
void print_tetrimino_left(game_t *, int, int);
void print_tetrimino_right(game_t *, int, int);
int change_term(int);
void set_pause(game_t *);
int verify_optind(int);
int find_size_x(char *);
void my_memset(char *, char);
int init_playing_ground(game_t *);
char *verif_echap(char *);
void fallin_tetrimino(game_t *);
void display_ground_and_calc(game_t *);
void launch_new_tetrimino(game_t *);
void move_left(game_t *);
void move_right(game_t *);
void put_calc_in_ground(game_t *);
int collision_left(game_t *);
int collision_right(game_t *, int);
int collision_down(game_t *);
void find_value_max(game_t *, int *, int *);
void find_max_row_for_check(game_t *, int, int, int *);
void find_max_col_for_check(game_t *, int, int, int *);
int is_there_star(int *);
int *find_pos(game_t *);
void find_size_tetri(game_t *, int **);
void make_new_in_calc(game_t *, int **, int *);

#endif
