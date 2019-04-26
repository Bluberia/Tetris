/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** splits a string into words
*/

#include "my.h"
#include <stdlib.h>

int my_is_alphanum(char tmp)
{
	if (tmp != '\t' && tmp != ' ' && tmp != '\0')
		return (1);
	else
		return (0);
}

int my_count_words(char *str)
{
	int i = 0;
	int words = 0;

	while (str[i] != '\0') {
		while (my_is_alphanum(str[i]) == 1) {
			words++;
			i++;
		}
		while (str[i] != '\0' && (my_is_alphanum(str[i]) == 0))
			i++;
	}
	return (words);
}

char *my_strcpy_modif(char *dest, char const *src, int i)
{
	int y = 0;

	while (my_is_alphanum(src[i]) != 0) {
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}

int my_count_characters(char *str, int i)
{
	int p = 0;

	while (my_is_alphanum(str[i]) == 1) {
		i++;
		p++;
	}
	return (p);
}

char **my_str_to_word_array(char *str)
{
	char **tab;
	int j = 0;
	int i = 0;

	tab = malloc(sizeof(char *) * (my_count_words(str) + 2));
	while (str[i] != '\0') {
		if (my_is_alphanum(str[i]) == 1) {
			tab[j] = malloc(sizeof(char *) * \
(my_count_characters(str, i) + 1));
			my_strcpy_modif(tab[j], str, i);
			j++;
			i += my_count_characters(str, i);
		} else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
