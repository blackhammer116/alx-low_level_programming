#include "main.h"
/**
 * flip_bits - determines the number of bits you need to
 * filp
 * @n: first number
 * @m: second number
 * Return: the number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int j, xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = xor >> i;
		if (j & 1)
			c++;
	}
	return (c);
}
