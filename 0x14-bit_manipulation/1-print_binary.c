#include "main.h"
/**
 * print_binary - prints a number in binary form
 * @n: the unsigned long int that gets printed
 * as binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned int b;

	for (i = 63; i >= 0; i--)
	{
		b = n >> i;

		if ((b & 1) == 1)
		{
			_putchar('1');
			c++;
		}
		else if (c != 0)
		{
			_putchar('0');
		}
	}
	if (c == 0)
		_putchar('0');
}
