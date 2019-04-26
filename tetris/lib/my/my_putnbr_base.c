/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** display parametres int in define base
*/

#include "my.h"

int my_putnbr_base(int nb, char *base)
{
	int size = my_strlen(base);
	int result = 0;
	int count = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if ((nb / size) > 0)
		count = my_putnbr_base((nb / size), base);
	result = nb % size;
	count++;
	my_putchar(base[result]);
	return (count);
}
