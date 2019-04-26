/*
** EPITECH PROJECT, 2017
** lib_my
** File description:
** lib my
*/

#include <stdarg.h>
#include <stdlib.h>

#ifndef __MY__H_
#define __MY__H_

#include "get_next_line.h"

int my_getnbr(char const *);
int my_printf(char *, ...);
int my_putchar(char);
int my_putnbr_base(int, char *);
int my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
int my_show_word_array(char *const *);
char *my_strcat(char *, char const *);
int my_strcmp(char const *, char const *);
char *my_strcpy(char *, char const *);
char *my_strdup(char const *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_isprintable(char const *);
int my_strlen(char const *);
char *my_strlowcase(char *);
char *my_strncat(char *, char const *, int);
int my_strncmp(char const *, char const *, int);
char *my_strncpy(char *, char const *, int);
int my_strstr(char *, char const *);
char **my_str_to_word_array(char *);
char *my_strupcase(char *);
int my_swap(int *, int *);
int my_putstr_nonprint(char const *);
int my_printf(char *, ...);
int redirect(int, char *, va_list);
int count_flags(char *);
void check_existing(char, int *, int *);
unsigned int my_putnbr_unsigned(unsigned int, char *);
int manage_flag_unsignedint(char *, int, unsigned int, char);
int put_convert_int_char(int);
int void_hexa(void *);
int manage_flag_int(char *, int, int, char);
long my_putlong_base(long, char *);
void *my_realloc(void *, int, int);
char *my_epurstr(char *);
int my_is_alphanum(char);
int my_strlim(char *, char);

#endif
