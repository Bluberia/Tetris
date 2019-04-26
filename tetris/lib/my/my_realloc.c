/*
** EPITECH PROJECT, 2018
** li
** File description:
** my_realloc
*/

#include <stdlib.h>
#include "my.h"

static void my_memcpy(void *dest, void *src, int size)
{
	char *tmp_src = (char *)src;
	char *tmp_dest = (char *)dest;

	for (int i = 0; i < size; i++)
		tmp_dest[i] = tmp_src[i];
}

void *my_realloc(void *src, int size, int memset_size)
{
	void *dest = NULL;

	if (src == NULL) {
		src = malloc(sizeof(*src) * size);
		return (src);
	}
	dest = malloc(size);
	if (dest == NULL)
		return (NULL);
	my_memcpy(dest, src, memset_size);
	free(src);
	return (dest);
}
