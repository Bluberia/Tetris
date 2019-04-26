/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** reproduce system function : printf
*/

#include <stdarg.h>
#include "my.h"
#include <stdio.h>
#include <string.h>

void check_str(int *i, int *count, char *str)
{
	if (str[*i] != '%' && str[*i] != '\0') {
		my_putchar(str[*i]);
		*count = *count + 1;
	}
}

char *check_mod(int *len, char type, char *str, int *count)
{
	int i = 0;

	if (type == '%' && *len == 1) {
		i++;
		*count += my_putchar('%');
		return (&str[i]);
	}
	return (str);
}

char *redirect_str(char *str, int *count, int *len, va_list va)
{
	int save = 0;

	if (str[0] != '\0') {
		save = *count;
		*count += redirect(*len, str, va);
		if (save != *count) {
			str = &str[*len];
			return (str);
		}
	}
	return (str);
}

int manage_str(char *str, va_list va, int i, int count)
{
	int len = 0;

	while (str[i] != '\0') {
		check_str(&i, &count, str);
		if (str[i] == '%') {
			i++;
			str = &str[i];
			len = count_flags(str);
			str = check_mod(&len, str[0], str, &count);
			str = redirect_str(str, &count, &len, va);
			i = 0;
		} else
			i++;
	}
	return (count);
}

int my_printf(char *str, ...)
{
	va_list va;
	int count = 0;
	int i = 0;

	va_start(va, str);
	count = manage_str(str, va, i, count);
	va_end(va);
	return (count);
}
