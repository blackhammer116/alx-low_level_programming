#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints the elements in dog
 * @d: pointer to a previously defined structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return NULL;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %d", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
