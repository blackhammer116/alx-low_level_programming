#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: first parameter
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d",n);
	else if (n > 98)
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
}