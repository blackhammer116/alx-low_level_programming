#include "main.h"
#include <stdio.h>
/**
 *print_number - prints any number as they are
 * @n: irst parameter
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		putchar("-");
		x = -n;
	}
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	putchar((x % 10) + '0');

}
