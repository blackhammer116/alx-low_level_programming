#include "main.h"
#include <stdio.h>
/**
 *print_array - print arrays in accordance to the given
 * parameter
 * @a: array variable to be passed
 * @n: number of arrays to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n != 0 && n != 1)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else if (i == n - 1)
				printf("%d", a[i]);
		}
	}
	printf("\n");
}
