/*
** EPITECH PROJECT, 2017
** manage_flag
** File description:
** manage flag
*/

#include "my.h"
#include "flag.h"
#include <stdarg.h>

const t_flags_unsignedint tab_flags_unsignedint[1] = {{'#', &manage_diese}};

int manage_flag_unsignedint(char *str, int len, unsigned int var, char type)
{
	int i = 0;
	int y = 0;
	int count = 0;

	while (y < 5 && str[i] != '\0') {
		while (i < (len - 1) && str[i] != \
tab_flags_unsignedint[y].flag && str[i] != '\0')
			i++;
		if (str[i] == tab_flags_unsignedint[y].flag) {
			count = tab_flags_unsignedint[y].print_flags(str, var, \
type);
			return (count);
		}
		y++;
		i = 0;
	}
	return (count);
}
