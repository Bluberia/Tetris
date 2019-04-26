/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** inverse characters of string
*/

#include "my.h"

char *my_revstr(char *str)
{
	int i = 0;
	int y = my_strlen(str);
	int mid;
	char c;

	mid = y / 2;
	y--;
	while (i < mid) {
		c = str [i];
		str[i] = str[y];
		str[y] = c;
		i++;
		y = y - 1;
	}
	return (str);
}