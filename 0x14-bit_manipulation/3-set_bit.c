#include "main.h"
/**
 * set_bit - sets a bit value of a number to 1
 * @n: number that gets changed
 * @index: index value
 * Return: -1 on failure, 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int j;

	if (index > 63)
		return (-1);
	j = 1 << index;

	*n = (*n & ~j) | (j);
	return (1);
}
