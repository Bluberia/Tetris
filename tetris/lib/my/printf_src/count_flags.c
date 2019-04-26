/*
** EPITECH PROJECT, 2017
** count_flags
** File description:
** count flags after %
*/

int check_tab(int *i, char *str)
{
	int y = 0;
	int tab[12] = {'d', 'i', 'u', 'o', 'x', 'X', 's', \
'%', 'b', 'S', 'c', 'p'};

	while (y < 13 && str[*i] != '\0') {
		if (tab[y] == str[*i]) {
			*i = *i + 1;
			return (1);
		}
		y++;
	}
	return (0);
}

int count_flags(char *str)
{
	int i = 0;

	while (i < 4 && str[i]) {
		if (check_tab(&i, str) == 1)
			return (i);
		i++;
	}
	return (0);
}
