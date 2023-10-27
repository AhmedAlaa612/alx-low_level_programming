#include "main.h"
/**
 * print_binary - convert decimal to binary
 * @n: decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bits = sizeof(n) * 8, printed = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar("1");
			printed++;
		}
		else if (printed)
			_putchar("0");
	}
	if (!printed)
		_putchar("0");
}
