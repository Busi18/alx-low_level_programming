#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *n;

	n = malloc(b);

	if (!n)
	{
		free(n);
		exit(98);
	}

	return (n);

}
