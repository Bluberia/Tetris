/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** one_by_one character
*/

#include "my.h"
#include <unistd.h>

int my_putstr_nonprint(char const *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0') {
		if (32 < str[i] && str[i] < 127) {
			my_putchar(str[i]);
			count++;
			i++;
		} else {
			my_putchar('\\');
			my_putnbr_base(str[i], "0123456789");
			i++;
			count++;
		}
	}
	return (count);
}
