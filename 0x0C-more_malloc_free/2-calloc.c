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
	unsigned int s = nmemb * size;

	if (!s)
		return (NULL);
	m = malloc(s);

	if (m == 0)
		return (NULL);
	while (s--)
		m[s] = 0;

	return (m);
}
