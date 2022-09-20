#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - prints half of the given string
 *@str: first parameter.
 */
void puts_half(char *str)
{
	int i = 0;
	int j = strlen(str);
	
	if (j % 2 == 0)
	{
		for (i = j / 2; i < j; i++)
		{
			printf("%c", str[i]);
		}
	}
	else if (j % 2 != 0)
	{
		for (i = (j + 1) / 2; i < j ; i++)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
