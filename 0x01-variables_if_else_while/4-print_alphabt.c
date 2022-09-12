#include <stdio.h>
#include <stdlib.h>
/**
 *Description: main - the functions print the alphabet except
 *q and e
 *
 * *Return: 0 if functional
 *
 */
int main()
{
	char ch;
	for (ch = 'a' ;ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
	{
		continue;
	}
	putchar(ch);
	}
	putchar('\n');
return (0);
}
