/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int check_backn(char **result, char **save, char *tmp)
{
	int i = 0;

	while ((*result)[i] != '\0' && (*result)[i] != '\n')
		i++;
	if ((*result)[i] == '\n') {
		*result = strcut(*result, save);
		if (tmp)
			free(tmp);
		return (1);
	}
	return (0);
}

void check_j_to_change_save(int j, char **save)
{
	if (j == 0) {
		free(*save);
		*save = NULL;
	} else
		(*save)[j] = '\0';
}

int check_size(int size, char **tmp, char **save)
{
	if (size == -1) {
		free(*tmp);
		return (1);
	} else if (size == 0) {
		free(*tmp);
		free(*save);
	}
	return (0);
}

int save_different_of_null(char **save, char *tmp, char **result)
{
	if (*save != NULL) {
		*result = str_dup_cat(*result, *save);
		free(*save);
		*save = NULL;
		if (check_backn(result, save, tmp) == 1)
			return (1);
	}
	return (0);
}

char *get_next_line(int fd)
{
	static char *save = NULL;
	char *result = NULL;
	char *tmp = malloc(sizeof(char) * (READ_SIZE + 1));
	int size = 0;

	if (tmp == NULL || fd < 0)
		return (NULL);
	if (save_different_of_null(&save, tmp, &result) == 1)
		return (result);
	for (size = read(fd, tmp, READ_SIZE); size > 0; \
size = read(fd, tmp, READ_SIZE)) {
		tmp[size] = '\0';
		result = str_dup_cat(result, tmp);
		if (check_backn(&result, &save, tmp) == 1)
			return (result);
	}
	if (check_size(size, &tmp, &save) == 1)
		return (NULL);
	return (result);
}
