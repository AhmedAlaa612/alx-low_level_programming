#include "main.h"

/**
 * _memset - sets a value to each byte in array
 * @s: array
 * @x: value
 * Return: a pointer
 */

char *_memset(char *s, char x)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] = x;
	return (ptr);
}

/**
 * *_calloc - allocates an array of nmemb elements of size size
 * @nmemb: number of elemnts
 * @size: size of each element
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);
	_memset(m, 0);

	return (m);
}
