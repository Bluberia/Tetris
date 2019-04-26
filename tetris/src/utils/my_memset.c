/*
** EPITECH PROJECT, 2017
** tetris
** File description:
** my_memset
*/

void my_memset(char *str, char c)
{
	for (unsigned int i = 0; i < sizeof(str); i++)
		str[i] = c;
}
