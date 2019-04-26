/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** delete all pair
*/

#include "proto.h"

void delete_all_pair(void)
{
	attroff(COLOR_PAIR(1));
	attroff(COLOR_PAIR(2));
	attroff(COLOR_PAIR(3));
	attroff(COLOR_PAIR(4));
	attroff(COLOR_PAIR(5));
	attroff(COLOR_PAIR(6));
	attroff(COLOR_PAIR(7));
}
