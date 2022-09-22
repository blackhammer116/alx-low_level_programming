#include "main.h"
#include <stdio.h>
/**
 *reverse_array - function reverses an array based on second parameter
 * which specifies how many values to reverse.
 * @a: array parameter
 * @n: constraint
 */
void reverse_array(int *a, int n)
{
	int i, x, y = n - 1;
	
	for (i = 0; i < n - 1; i++)
	{
		x = a[i];
		a[i] = a[y];
		a[y] = x;
		y--;
	}
}
