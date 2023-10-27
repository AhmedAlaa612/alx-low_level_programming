#include "main.h"
/**
 * flip_bits - counts how many bits to flip to get m from n
 * @n: first number
 * @m: second number
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nXORm = n ^ m;
	unsigned int count = 0;

	while (nXORm)
	{
		count += nXORm & 1ul;
		nXORm >>= 1;
	}
	return (count);
}
