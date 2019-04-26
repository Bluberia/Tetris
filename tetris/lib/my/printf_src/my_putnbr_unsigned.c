/*
** EPITECH PROJECT, 2017
** my_putnbr_unsigned
** File description:
** display parametres unsigned int in define base
*/

#include "my.h"

unsigned int my_putnbr_unsigned(unsigned int nb, char *base)
{
	int size = my_strlen(base);
	unsigned int result = 0;
	int count = 0;

	if ((nb / size) > 0)
		count = my_putnbr_base((nb / size), base);
	result = nb % size;
	count++;
	my_putchar(base[result]);
	return (count);
}
