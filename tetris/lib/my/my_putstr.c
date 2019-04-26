/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** one_by_one character
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
	return (write(1, str, my_strlen(str)));
}
