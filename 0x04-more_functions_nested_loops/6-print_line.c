#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: number of times the line gets printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
