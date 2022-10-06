#include "main.h"
#include <stdlib.h>
/**
 * _calloc - creates an array of dynamic size
 * @size: size of the array
 * @nmemb: number of members
 * Return:the array pointer a
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, j = 0;
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	j = nmemb * size;
	a = malloc(j);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		a[i] = 0;
	}
	return (a);
}
