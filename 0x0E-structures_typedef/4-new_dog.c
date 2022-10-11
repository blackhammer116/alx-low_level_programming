#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog function
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: NULL on failer newDOG on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, c = 0;
	dog_t *newDOG;

	newDOG = malloc(sizeof(dog_t));
	if (newDOG == NULL)
		return (NULL);
	newDOG->age = age;
	for (i = 0; name[i] != '\0'; i++)
		c++;

	newDOG->name = malloc(sizeof(char) * (c + 1));
	if (newDOG->name == NULL)
	{
		free(newDOG);
		return (NULL);
	}
	for (i = 0; 1; i++)
	{
		(*(newDOG->name + i)) = name[i];
		if (name[i] == '\0')
			break;
	}
	for (i = 0, c = 0; owner[i] != '\0'; i++)
		c++;
	newDOG->owner = malloc(sizeof(char) * (c + 1));
	if (newDOG->owner == NULL)
	{
		free(newDOG);
		free(newDOG->name);
		return (NULL);
	}
	for (i = 0; 1; i++)
	{
		(*(newDOG->owner + i)) = owner[i];
			if (owner[i] == '\0')
				break;
	}
	return (newDOG);
}
