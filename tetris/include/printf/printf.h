/*
** EPITECH PROJECT, 2017
** print
** File description:
** printf.h
*/

#include <stdarg.h>
#ifndef __PRINTF_H_
#define __PRINTF_H_

typedef struct s_tab_fcts
{
	char letter;
	int (*print)(va_list, char *, int);

} tab_fcts_t;

int print_d(va_list, char *, int);
int print_i(va_list, char *, int);
int print_o(va_list, char *, int);
int print_u(va_list, char *, int);
int print_x(va_list, char *, int);
int print_x_maj(va_list, char *, int);
int print_s(va_list, char *, int);
int print_b(va_list, char *, int);
int print_s_maj(va_list, char *, int);
int print_c(va_list, char *, int);
int print_p(va_list, char *, int);

const tab_fcts_t tab_print[11];

#endif
