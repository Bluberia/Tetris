/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int size = 0;
	int i = 0;

	size = my_strlen(dest);
	while (src[i] != '\0') {
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
