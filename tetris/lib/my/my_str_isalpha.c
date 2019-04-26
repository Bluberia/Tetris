/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** 1 only alpha & 0 other
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if ((('a' > str[i]) || (str[i] > 'z')) && \
(('A' > str[i]) || (str[i] > 'Z'))) {
			return (0);
		}
		i++;
	}
	return (1);
}
