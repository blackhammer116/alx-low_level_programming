#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of both diagonals of
 * a square matrix.
 * @a: pointer to an array
 * @size: size of the array.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0, k = 0, x = 1;
	long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[(size + 1) * i];
		sum2 = sum2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
