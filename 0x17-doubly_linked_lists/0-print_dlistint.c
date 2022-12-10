#include "lists.h"
/**
 * print_dlistint - prints elements in DLL
 * @h: head pointer
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t n = 0;

	while (temp)
	{
		printf("%lu\n", temp->n);
		temp = temp->next;
		n++;
	}
	return n;
}
