#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Is the function that initializes the variables from dog
 * @d: pointer to the struct dog
 * @name: name variable
 * @age: age parameter
 * @owner: owner parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
		d =malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
