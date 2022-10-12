#include "function_pointers.h"
/**
 * int_index - searches the given number through an array
 * and returns the index number if found
 * @array: array parameter
 * @size: size of array
 * @cmp: pointer to a function containing the number to be searched
 * Return: -1 on error the index number on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);

		if (j != 0)
		{
			return (i);
		}
	}
	return (-1);
}
