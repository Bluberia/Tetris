/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** find last delimitor
*/

#include <unistd.h>

int find_last_point(char *str, char delim)
{
	int i = 0;
	int save = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0') {
		if (str[i] == delim)
			save = i;
		i++;
	}
	return (save);
}
