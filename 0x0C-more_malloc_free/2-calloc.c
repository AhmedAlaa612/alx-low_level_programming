#include "main.h"

/**
 * *_calloc - allocates an array of nmemb elements of size size
 * @nmemb: number of elemnts
 * @size: size of each element
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == 0)
		return (NULL);
	while (nmemb--)
		m[nmemb] = 0;

	return (m);
}
