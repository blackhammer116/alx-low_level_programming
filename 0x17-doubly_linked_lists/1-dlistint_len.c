#include "lists.h"
/**
 * dlistint_len - returns the number of nodes in the list
 * @h: head pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp = h;
	

	while (temp)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
