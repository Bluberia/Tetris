/*
** EPITECH PROJECT, 2017
** conversion3
** File description:
** conversion
*/

#include "my.h"
#include <stdarg.h>

int print_s_maj(va_list va, char *str, int len)
{
	int count = 0;

	str = str;
	len = len;
	count = my_putstr_nonprint(va_arg(va, char *));
	return (count);
}

int print_c(va_list va, char *str, int len)
{
	char var = va_arg(va, int);
	int count = 0;

	len = len;
	str = str;
	switch (len) {
	case 1:
		count = put_convert_int_char(var);
		return (count);
	case 2:
	case 3:
	case 4:
		return (count);
	}
	return (count);
}

int print_p(va_list va, char *str, int len)
{
	void *var = va_arg(va, void *);
	int count = 0;

	str = str;
	switch (len) {
	case 1:
		count = void_hexa(var);
		return (count);
	case 2:
	case 3:
	case 4:
		return (count);
	}
	return (count);
}
