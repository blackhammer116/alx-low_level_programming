#include "main.h"
#include <stdio.h>
/**
 *puts2 - prints even indexes of a string
 @str: string parameter.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (*(str + i) == 0)
		{
			printf("\n");
			break;
		}
		if (i % 2 == 0)
			print ("%c", *(str + i));
	}
}
