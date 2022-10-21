#include "lists.h"
/**
 * list_len - function that returns the number of elements in the list
 * @h: list parameter
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->str != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
