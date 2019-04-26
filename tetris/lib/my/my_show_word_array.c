/*
** EPITECH PROJECT, 2017
** my_show_word_array
** File description:
** displays the content of an array of words
*/

#include "my.h"
#include <stdlib.h>

int my_show_word_array(char *const *tab)
{
	int y = 0;

	while (tab[y] != NULL) {
		my_putstr(tab[y]);
		my_putchar('\n');
		y++;
	}
	return (0);
}