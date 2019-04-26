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

int find_file_to_fill(char **name_file, int i, game_t *info)
{
	int size = 0;
	char *path = NULL;

	path = malloc(sizeof(char) * (14 + my_strlen(name_file[i]) + 1));
	if (path == NULL)
		return (ERROR);
	fill_path(path);
	size = find_last_point(name_file[i], '.');
	if (my_strcmp(&name_file[i][size], ".tetrimino") == 0) {
		if (fill_tetrimino(info, my_strcat(path, name_file[i])) \
== ERROR)
			return (ERROR);
	}
	free(path);
	return (0);
}

int fill_tetrimino_in_struct(game_t *info)
{
	DIR* dir = opendir("./tetriminos");
	char **name_file = NULL;

	if (dir == NULL)
		return (ERROR);
	name_file = fill_name_file(&dir);
	for (int i = 0; name_file[i]; i++)
		sort_name_file(name_file, i);
	for (int i = 0; name_file[i] != NULL; i++) {
		if (find_file_to_fill(name_file, i, info) == ERROR)
			return (ERROR);
	}
	if (closedir(dir) == -1)
		return (ERROR);
	return (0);
}
