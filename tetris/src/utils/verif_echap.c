/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** verify info of tetris
*/

#include "proto.h"
#include "my.h"

char *verif_echap(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != '^')
		i++;
	if (str[i] == '^' && str[i + 1] == 'E') {
		str[i] = 27;
		for (i++; str[i] != '\0'; i++)
			str[i] = str[i + 1];
	}
	return (str);
}
