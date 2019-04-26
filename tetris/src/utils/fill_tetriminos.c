/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** fill tetriminos in the structure
*/

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"
#include "proto.h"

int find_data_for_fill(char *line, game_t *info)
{
	int height = 0;
	char **tab_line = my_str_to_word_array(line);

	if (tab_line[0] == NULL || tab_line[1] == NULL || tab_line[2] == NULL)
		return (1);
	height = my_getnbr(tab_line[1]);
	if (my_getnbr(tab_line[0]) > info->status.max_width)
		info->status.max_width = my_getnbr(tab_line[0]);
	if (my_getnbr(tab_line[1]) > info->status.max_height)
		info->status.max_height = my_getnbr(tab_line[1]);
	info->data.color[info->data.nb_tetriminos - 1] = my_getnbr(tab_line[2]);
	info->data.tetriminos[info->data.nb_tetriminos - 1] = \
malloc(sizeof(char *) * (height + 1));
	if (info->data.tetriminos[info->data.nb_tetriminos - 1] == NULL)
		return (ERROR);
	return (0);
}

int init_data_tetriminos(game_t *info)
{
	info->data.nb_tetriminos += 1;
	info->data.color = my_realloc(info->data.color, \
sizeof(int) * info->data.nb_tetriminos, sizeof(int) * \
(info->data.nb_tetriminos - 1));
	info->data.tetriminos = my_realloc(info->data.tetriminos, \
sizeof(char **) * (info->data.nb_tetriminos + 1), sizeof(char **) * \
info->data.nb_tetriminos);
	info->data.tetriminos[info->data.nb_tetriminos] = NULL;
	if (info->data.tetriminos == NULL || info->data.nb_tetriminos == 0)
		return (ERROR);
	return (0);
}

int second_part_of_fill(char *line, int fd, game_t *info, int result)
{
	int i = 0;

	if (result == 1) {
		for (i = 0; line != NULL; i++) {
			line = get_next_line(fd);
		}
		close(fd);
		return (0);
	}
	free(line);
	line = get_next_line(fd);
	for (i = 0; line != NULL; i++) {
		info->data.tetriminos[info->data.nb_tetriminos - 1][i] = line;
		line = get_next_line(fd);
	}
	info->data.tetriminos[info->data.nb_tetriminos - 1][i] = NULL;
	close(fd);
	return (0);
}

int fill_tetrimino(game_t *info, char *path)
{
	int fd = open(path, O_RDONLY);
	char *line = NULL;
	int result = 0;

	if (fd == -1)
		return (ERROR);
	line = get_next_line(fd);
	if (line == NULL)
		return (0);
	if (my_strstr(line, "fake") == 1 || my_strlen(line) < 4) {
		while (line != NULL)
			line = get_next_line(fd);
		return (0);
	}
	line = my_epurstr(line);
	if (init_data_tetriminos(info) == ERROR)
		return (ERROR);
	result = find_data_for_fill(line, info);
	if (result == ERROR)
		return (ERROR);
	return (second_part_of_fill(line, fd, info, result));

}
