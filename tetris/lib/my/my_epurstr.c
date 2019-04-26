/*
** EPITECH PROJECT, 2018
** epurstr
** File description:
** delete space in str
*/

#include "my.h"

char *my_epurstr(char *str)
{
	char *new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
	int i = 0;
	int y = 0;

	if (new_str == NULL)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0') {
		while ((str[i] == ' ' || str[i] == '\t') && \
(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			i++;
		new_str[y++] = str[i];
		if (i < my_strlen(str))
			i++;
	}
	new_str[y] = '\0';
	free(str);
	return (new_str);
}
