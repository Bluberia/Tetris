/*
** EPITECH PROJECT, 2017
** conversion2
** File description:
** conversion
*/

#include "my.h"
#include <errno.h>
#include <string.h>
#include <stdarg.h>

int print_x_maj(va_list va, char *str, int len)
{
	unsigned int var = va_arg(va, unsigned int);
	int count = 0;

	switch (len) {
	case 1:
		count = my_putnbr_unsigned(var, "0123456789ABCDEF");
		return (count);
	case 2:
	case 3:
	case 4:
		count += manage_flag_unsignedint(str, len, var, 'X');
		return (count);
	}
	return (count);
}

int print_s(va_list va, char *str, int len)
{
	char *var = va_arg(va, char *);
	int count = 0;

	str = str;
	switch (len) {
	case 1:
		count = my_putstr(var);
		return (count);
	case 2:
	case 3:
	case 4:
		return (count);
	}
	return (count);
}

int print_b(va_list va, char *str, int len)
{
	int count = 0;

	str = str;
	len = len;
	count = my_putnbr_unsigned(va_arg(va, unsigned int), "01");
	return (count);
}
