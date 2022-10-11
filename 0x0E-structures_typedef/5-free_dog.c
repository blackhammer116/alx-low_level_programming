#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory and value of *d
 * @d: pointer to a struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
