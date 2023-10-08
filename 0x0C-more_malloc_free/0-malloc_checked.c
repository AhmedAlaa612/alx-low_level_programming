#include "main.h"

/**
 * *malloc_checked - allocate memmory with malloc
 * @b: int
 * Return: pointer to the array of NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
