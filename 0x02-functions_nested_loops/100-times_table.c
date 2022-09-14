#include "main.h"
/**
 * times_table - multiplication table
 */
void print_times_table(int n)
{
	if (n >! 15 || n <! 0)
	{
		int i;
		int j;
		int x;

		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{	
				x = i * j;
				if (j == 0)
					_putchar(x + '0');
				if (x < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
				else if (x >= 10 && x < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0'); 
					_putchar((x % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
