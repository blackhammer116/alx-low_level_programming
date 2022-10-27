#include "main.h"
/**
 * binary_to_uint - converts binary into an unsigned int
 * @b: binary that gets converted
 * Return: 0 on failure and the unsigned int on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, c = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			c <<= 1;
			c += b[i] + '0';
			i++;
		}
		else
			return (0);
	}
	return (c);
}
