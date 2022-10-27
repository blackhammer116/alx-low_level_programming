#include "main.h"
/**
 *
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
