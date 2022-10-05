#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of dynamic size
 * @size: size of the array
 * @c: character to be set
 * Return:the array pointer a
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = (char *) malloc(size * sizeof(char));
	if (a == 'NULL')
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
