#include "hash_tables.h"

/**
 * hash_table_create - funtion that creates a hash table
 * @size: size of the array
 * Return: returns the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	if (size == 0)
		return (NULL);
	table->size = size;

	table->array = calloc((size_t) size, sizeof(hash_table_t *));
	if (!table->array)
		return (NULL);

	return (table);
}
