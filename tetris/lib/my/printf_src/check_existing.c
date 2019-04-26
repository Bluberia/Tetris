/*
** EPITECH PROJECT, 2017
** check_exiting
** File description:
** exheck existing
*/

#include "printf.h"
#include "my.h"

const tab_fcts_t tab_print_2[11] = {{'d', &print_d}, \
{'i', &print_i}, \
{'o', &print_o}, \
{'u', &print_u}, \
{'x', &print_x},  \
{'X', &print_x_maj}, \
{'s', &print_s}, \
{'b', &print_b}, \
{'S', &print_s_maj}, \
{'c', &print_c}, \
{'p', &print_p}};

void check_existing(char type, int *i, int *count)
{
	int y = 0;

	while (y < 11 && type != tab_print_2[y].letter && type != '#' && \
type != '+' && type != ' ')
		y++;
	if (type != tab_print_2[y].letter && type != '#' && type != '+' \
&& type != ' ') {
		my_putchar('%');
		*count += *count + 1;
		*i = *i + 1;
	}
}
