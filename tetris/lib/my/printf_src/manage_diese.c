/*
** EPITECH PROJECT, 2017
** manage diese
** File description:
** manage diese
*/

#include "my.h"

int manage_diese(char *str, int var, char type)
{
	int count = 0;

	str = str;
	if (type == 'o') {
		count = my_putchar('0');
		count += my_putnbr_unsigned(var, "01234567");
		return (count);
	}
	if (type == 'x') {
		count = my_putstr("0x");
		count += my_putnbr_unsigned(var, "0123456789abcdef");
	}
	if (type == 'X') {
		count = my_putstr("0X");
		count += my_putnbr_unsigned(var, "0123456789ABCDEF");
	}
	return (count);
}
