#include <stdio.h>
#include <stdlib.h>
/**
 * main - hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char ch;

	for (num = '0'; num < 10; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
return (0);
}
