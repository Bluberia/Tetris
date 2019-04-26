/*
** EPITECH PROJECT, 2017
** conversion
** File description:
** conversion
*/

#include "my.h"
#include <stdarg.h>

int print_d(va_list va, char *str, int len)
{
	int var = va_arg(va, int);
	int count = 0;

	switch (len) {
	case 1:
		count += my_putnbr_base(var, "0123456789");
		return (count);
	case 2:
	case 3:
	case 4:
		count += manage_flag_int(str, len, var, 'd');
		return (count);
	}
	return (count);
}

int print_i(va_list va, char *str, int len)
{
	int var = va_arg(va, int);
	int count = 0;

	switch (len) {
	case 1:
		count += my_putnbr_base(var, "0123456789");
		return (count);
	case 2:
	case 3:
	case 4:
		count += manage_flag_int(str, len, var, 'i');
		return (count);
	}
	return (count);
}

int print_o(va_list va, char *str, int len)
{
	unsigned int var = va_arg(va, unsigned int);
	int count = 0;

	switch (len) {
	case 1:
		count = my_putnbr_unsigned(var, "01234567");
		return (count);
	case 2:
	case 3:
	case 4:
		count += manage_flag_unsignedint(str, len, var, 'o');
		return (count);
	}
	return (count);
}

int print_u(va_list va, char *str, int len)
{
	unsigned int var = va_arg(va, unsigned int);
	int count = 0;

	switch (len) {
	case 1:
		count = my_putnbr_unsigned(var, "0123456789");
		return (count);
	case 2:
	case 3:
	case 4:
		count += manage_flag_unsignedint(str, len, var, 'u');
		return (count);
	}
	return (count);
}

int print_x(va_list va, char *str, int len)
{
	unsigned int var = va_arg(va, unsigned int);
	int count = 0;

	switch (len) {
	case 1:
		count = my_putnbr_unsigned(var, "0123456789abcdef");
		return (count);
	case 2:
	case 3:
	case 4:
		count += manage_flag_unsignedint(str, len, var, 'x');
		return (count);
	}
	return (count);
}
