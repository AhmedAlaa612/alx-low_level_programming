#include "main.h"
/**
 * str_concat - concates 2 strings
 * @s1: first string
 * @s2: sec string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
