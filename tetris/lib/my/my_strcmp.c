/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** see if equals
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i]) {
		result = s1[i] - s2[i];
		return (result);
	}
	return (0);
}