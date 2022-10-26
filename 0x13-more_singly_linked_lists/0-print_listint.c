#include "lists.h"
/**
 * print_listint - prints elements of a list
 * @h: list pointer
 * Return: the number of nodes "i"
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
