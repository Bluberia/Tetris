/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** returns a number, sent to the function as a string
*/

int my_getnbr(char const *str)
{
	int nb = 0;
	int negative = 1;
	int i = 0;

	while (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-')
			negative = negative * (-1);
		i++;
	}
	while (str[i] != '\0') {
		if ((str[i] >= '0') && (str[i] <= '9')) {
			nb = nb * 10;
			nb += str[i] - 48;
			i++;
		} else
			return (nb * negative);
	}
	return (nb * negative);
}
