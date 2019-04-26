/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** see if equals until n
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}
