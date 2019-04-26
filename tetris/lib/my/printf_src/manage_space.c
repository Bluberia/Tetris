/*
** EPITECH PROJECT, 2017
** manage space
** File description:
** manage space
*/

#include "my.h"
#include "flag.h"

int check_plus(char *str, int len)
{
	int i = 0;

	while (i < len - 1) {
		if (str[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

int manage_space(char *str, int var, int len, char type)
{
	int count = 0;

	if (type == 'd' || type == 'i') {
		if (check_plus(str, len) == 1) {
			count = manage_plus(str, var, len, type);
			return (count);
		}
		if (var > 0)
			count = my_putchar(' ');
		count += my_putnbr_base(var, "0123456789");
	}
	return (count);
}
