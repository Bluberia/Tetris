/*
** EPITECH PROJECT, 2017
** manage_plus
** File description:
** manage _plus
*/

#include "my.h"

int manage_plus(char *str, int var, int len, char type)
{
	int count = 0;

	str = str;
	len = len;
	if (type == 'd' || type == 'i') {
		if (var > 0)
			count = my_putchar('+');
		count += my_putnbr_base(var, "0123456789");
	}
	return (count);
}
