#include "math.h"
/**
 *jack_bauer - prints out the 24 hrs 
 *
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while(a <= 2)
	{
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		if (a == 2 && b > 3)
			break;
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');
		d++;
	}
}
