#Include "lists.h"
/**
 * listint_len - returns the number of nodes in a given list
 * @h: pointer to a list
 * Return: the total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
