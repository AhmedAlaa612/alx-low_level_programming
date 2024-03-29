#include "main.h"
/**
 * get_bit - returns the bit in an index
 * @index: index to get
 * @n: decimal
 * Return: value at index or -1 if problem occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits = sizeof(n) * 8;

	if (index >= bits)
		return (-1);
	return (n >> index & 1);
}
