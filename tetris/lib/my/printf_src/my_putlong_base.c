/*
** EPITECH PROJECT, 2017
** my_putlong_base
** File description:
** display parametres long in base define
*/

#include "my.h"

long my_putlong_base(long nb, char *base)
{
	int size = my_strlen(base);
	long result = 0;
	int count = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if ((nb / size) > 0)
		count = my_putlong_base((nb / size), base);
	result = nb % size;
	count++;
	my_putchar(base[result]);
	return (count);
}
