/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** 1 only number & 0 alpha
*/

int my_str_isnum(char const *str)
{
	int i = 0;

	if (str[i] == '-')
		i++;
	while (str[i] != '\0') {
		if (('0' > str[i]) || (str[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}
