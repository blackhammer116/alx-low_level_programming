#include "main.h"
/**
 * get_bit - gets the bit value of a number according to the
 * specified index
 * @n: unsigned int value
 * @index: required index value
 * Return: the bit value on success or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
	return (-1);
}
