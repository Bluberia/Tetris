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

char *strcut(char *result, char **save)
{
	int i = 0;
	int j = 0;
	int back_n = my_strlim(result, '\n');
	int size = my_strlim(result, '\0');
	char *new = malloc(sizeof(char) * (back_n + 2));

	*save = malloc(sizeof(char) * (size - back_n + 1));
	while (i < back_n) {
		new[i] = result[i];
		i++;
	}
	new[i] = '\0';
	i++;
	while (i < size) {
		(*save)[j] = result[i];
		j++;
		i++;
	}
	check_j_to_change_save(j, save);
	free(result);
	return (new);
}
