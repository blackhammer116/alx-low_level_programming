#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key
 * @key: key to be check
 * @size: size of the array
 * Return: returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((unsigned char *) key);
	unsigned long int key_index = hash % size;

	return (key_index);
}
