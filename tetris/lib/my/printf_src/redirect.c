/*
** EPITECH PROJECT, 2017
** redirect
** File description:
** redirect flags
*/

#include "printf.h"
#include <stdarg.h>

const tab_fcts_t tab_print[11] = {{'d', &print_d}, \
{'i', &print_i}, \
{'o', &print_o}, \
{'u', &print_u}, \
{'x', &print_x}, \
{'X', &print_x_maj}, \
{'s', &print_s}, \
{'b', &print_b}, \
{'S', &print_s_maj}, \
{'c', &print_c}, \
{'p', &print_p}};

int redirect(int len, char *str, va_list va)
{
	int i = 0;
	int count = 0;

	while (i < 11 && str[len - 1] != tab_print[i].letter)
		i++;
	if (str[len - 1] == tab_print[i].letter)
		count = tab_print[i].print(va, str, len);
	return (count);
}
