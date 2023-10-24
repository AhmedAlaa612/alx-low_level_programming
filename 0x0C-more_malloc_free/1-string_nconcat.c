#include "main.h"

/**
 * *string_nconcat - concatenates string s1 with n bytes of s2
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pointet
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len, s2_len;

	/*check if strings are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* compute length of strings*/
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/* n > s2_len ? n = s2_len*/
	if (n > s2_len)
		n = s2_len;
	/* allocate memmory*/
	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/* copy strings to str*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
