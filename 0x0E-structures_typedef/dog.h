#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new function that defines a dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif