#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size
 * @c: char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (NULL);
	while (size--)
		n[size] = c;
	return (n);
}
