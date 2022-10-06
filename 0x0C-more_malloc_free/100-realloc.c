#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory from one array into another
 * @ptr: old array pointer
 * @old_size: old size
 * @new_size: new size
 * Return: NULL if it fails Nptr if success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *Nptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		Nptr = malloc(new_size);
		if (Nptr == NULL)
		{
			return (NULL);
		}
		return (Nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	Nptr = malloc(new_size);
	if (Nptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		Nptr[i] =((char *) ptr)[i];
	}
	free(ptr);
	return (Nptr);
}
