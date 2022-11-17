#include "main.h"
/**
 * print_triangle - prints a triangle with the specified size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size ;i++)
		{
			for (j = 0; <= size; i++)
			{
				if (j < (size - 1))
				{
					_putchar(' ');
					continue;
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
