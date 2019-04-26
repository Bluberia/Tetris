/*
** EPITECH PROJECT, 2018
** get_next_line
** File description:
** get next line
*/

#ifndef READ_SIZE
#define READ_SIZE (10)
#endif

#ifndef __NEXT_LINE_
#define __NEXT_LINE_

int my_strlim(char *, char);
char *str_dup_cat(char *, char *);
int check_backn(char **, char **, char *);
char *strcut(char *, char **);
void check_j_to_change_save(int, char **);
int check_size(int, char **, char **);
int save_different_of_null(char **, char *, char **);
char *get_next_line(int);

#endif
