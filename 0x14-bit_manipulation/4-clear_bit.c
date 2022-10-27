#include "main.h"
/**
 * clear_bit - sets a bit value of a number to 0
 * @n: number to be changed
 * @index: index value
 * Return: -1 on failure, 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n & ~j);
	return (1);
}
