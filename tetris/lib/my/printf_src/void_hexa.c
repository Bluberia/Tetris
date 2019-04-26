/*
** EPITECH PROJECT, 2017
** void_hexa
** File description:
** display a void in hexadecimal
*/

#include <unistd.h>
#include "my.h"

int void_hexa(void *src)
{
	int count = 0;

	count = my_putstr("0x");
	count += my_putlong_base((long)src , "0123456789abcdef");
	return (count);
}
