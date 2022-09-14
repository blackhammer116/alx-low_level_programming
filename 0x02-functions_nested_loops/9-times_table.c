#include "main.h"
/**
 * times_table - multiplication table
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			_putchar(x + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
