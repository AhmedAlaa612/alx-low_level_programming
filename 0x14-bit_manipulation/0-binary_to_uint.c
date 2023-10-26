#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len, sum;

	if (!b)
		return (0);
	len = _strlen(b);
	sum = 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		j = b[i] - '0';
		sum += j * (1 << (len - i - 1));
	}
	return (sum);
}
