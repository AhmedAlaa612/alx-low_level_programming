#include "main.h"
/**
 * rev_string - reverse string
 * @s: string 
 */
void rev_string(char *s)
{
	char temp;
	int len = 0, i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
