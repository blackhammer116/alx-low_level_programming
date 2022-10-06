#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array with specified range
 * @min: minimum value
 * @max: maximum value
 * Return: NULL if it fails a if success
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
