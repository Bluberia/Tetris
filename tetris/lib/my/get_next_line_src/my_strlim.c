/*
** EPITECH PROJECT, 2018
** my_strlim
** File description:
** strlim
*/

#include <unistd.h>

int my_strlim(char *str, char delim)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0' && str[i] != delim)
		i++;
	return (i);
}
