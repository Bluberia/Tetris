/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** allocates memory and copies the string given as argument in it
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
	char *str;
	int i = 0;

	i = my_strlen(src);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0') {
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}