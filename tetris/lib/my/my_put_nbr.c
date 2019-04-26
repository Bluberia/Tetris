/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** display parametres int
*/

#include "my.h"

int my_put_nbr2(int nb, int module, int number, int result)
{
	while (result >= 1) {
		number = nb / result;
		module = number % 10;
		result = result / 10;
		number = module + 48;
		my_putchar(number);
	}
	return (0);
}

int my_put_nbr(int nb)
{
	int module = 0;
	int result = 1;
	int number = nb;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
		number = number * (-1);
	}
	number = number / 10;
	while (number >= 1) {
		number = number / 10;
		result = result * 10;
	}
	my_put_nbr2(nb, module, number, result);
	return (0);
}
