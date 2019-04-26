/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** inverse int a and int b
*/

#include "my.h"

int my_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return (tmp);
}
