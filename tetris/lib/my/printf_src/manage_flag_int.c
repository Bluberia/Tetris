/*
** EPITECH PROJECT, 2017
** manage_flag
** File description:
** manage flag
*/

#include "my.h"
#include "flag.h"
#include <stdarg.h>

const t_flags_int tab_flags_int[2] = {{' ', &manage_space}, \
{'+', &manage_plus}};

int manage_flag_int(char *str, int len, int var, char type)
{
	int i = 0;
	int y = 0;
	int count = 0;

	while (y < 5 && str[i] != '\0') {
		while (i < (len - 1) && str[i] != tab_flags_int[y].flag \
&& str[i] != '\0')
			i++;
		if (str[i] == tab_flags_int[y].flag) {
			count = tab_flags_int[y].print_flags(str, var, \
len, type);
			return (count);
		}
		y++;
		i = 0;
	}
	return (count);
}
