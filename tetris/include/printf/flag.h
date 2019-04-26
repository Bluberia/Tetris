/*
** EPITECH PROJECT, 2017
** flag.h
** File description:
** flag.h
*/

typedef struct s_flags_int
{
	char flag;
	int (*print_flags)(char *, int, int, char);
} t_flags_int;

int manage_space(char *, int, int, char);
int manage_plus(char *, int, int, char);

const t_flags_int tab_flags_int[2];

typedef struct s_flags_unsignedint
{
	char flag;
	int (*print_flags)(char *, unsigned int, char);
} t_flags_unsignedint;

int manage_diese(char *, unsigned int, char);

const t_flags_unsignedint tab_flags_unsignedint[1];
