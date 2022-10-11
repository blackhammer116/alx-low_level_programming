#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Is the function that initializes the variables from dog
 * @d: pointer to the struct dog
 * @name: name variable
 * @age: age parameter
 * @owner: owner parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return NULL;
	d->name = name;
	d->age = age;
	d->owner = owner;
	return d;
}
