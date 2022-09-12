#include <stdio.h>
#include <stdlib.h>
/**
 * main - number combinations
 *
 * Return - 0
 */
int main(void)
{
	int num;
	for (num = '0'; num <= '9';num++)
	{
		putchar(num);
		putchar(', ');
	}
	putchar('\n');
return (0);
}
