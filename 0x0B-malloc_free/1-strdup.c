#include "main.h"
/**
 * _strdup - duplicate a string
 * @str: string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	m = malloc(sizeof(*str) * size + 1);

	if (m == 0)
		return (NULL);
	for (; i < size; i++)
		m[i] =  str[i];
	return (m);
}
