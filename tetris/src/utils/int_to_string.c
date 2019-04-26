/*
** EPITECH PROJECT, 2017
** int to char
** File description:
** transform int to char*
*/

#include <stdlib.h>
#include "proto.h"
#include "my.h"

char *int_to_string(int nb)
{
	int module = 0;
	int result = 1;
	int number = nb;
	int i = find_size(nb);
	char *string = malloc(sizeof(char) * (i + 1));

	number = number / 10;
	while (number >= 1) {
		number = number / 10;
		result = result * 10;
	}
	for (i = 0; result >= 1; i++) {
		number = nb / result;
		module = number % 10;
		result = result / 10;
		number = module + 48;
		string[i] = number;
	}
	string[i] = '\0';
	return (string);
}
