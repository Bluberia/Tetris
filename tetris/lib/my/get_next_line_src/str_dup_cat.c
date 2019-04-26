/*
** EPITECH PROJECT, 2018
** str dud cat
** File description:
** str dup cat
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *str_dup_cat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char *result = NULL;

	result = malloc(sizeof(char) * (my_strlim(src, '\0') + \
my_strlim(dest, '\0') + 1));
	if (result == NULL)
		return (NULL);
	while (dest != NULL && dest[i] != '\0') {
		result[i] = dest[i];
		i++;
	}
	while (src != NULL && src[j] != '\0') {
		result[i] = src[j];
		j++;
		i++;
	}
	result[i] = '\0';
	free(dest);
	return (result);
}
