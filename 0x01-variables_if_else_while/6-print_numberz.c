#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints 0-9
 *
 * Return: 0 if functional
 */
int main (void)
{
	int num;

	for (num = '0'; num <= '9' ; num ++)
	{
		putchar(num);
	}
	putchar('\n');
return (0);
}
