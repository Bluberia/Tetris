/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** concatenates n characters of src str to end of dest str
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
	int size = 0;
	int i = 0;

	size = my_strlen(dest);
	while (src[i] != '\0' && i != nb && i < size) {
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
