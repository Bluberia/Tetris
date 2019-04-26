/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** reproduce the behaviour of strstr
*/

#include <unistd.h>
#include "my.h"

int my_strstr(char *str, char const *to_find)
{
	int index = 0;

	while (str[index] != '\0' && my_strncmp(&str[index], to_find, \
my_strlen(to_find)) != 0)
		index++;
	if (str[index] == '\0')
		return (0);
	return (1);
}
