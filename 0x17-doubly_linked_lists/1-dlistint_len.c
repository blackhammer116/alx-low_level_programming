#include "lists.h"
/**
 * dlistint_len - returns the number of nodes in the list
 * @h: head pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t n = 0;

	while (temp)
	{
		temp = temp->next;
		n++;
	}
	return n;
}
