#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - prints string in reverse order
 *@s: is the parameter to be passed
 */
void rev_string(char *s)
{
	int i = 0;

	i = strlen(s);
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
