/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** copie n characters
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (i != n) {
		dest[i] = src[i];
		i++;
	}
	return (dest);
}