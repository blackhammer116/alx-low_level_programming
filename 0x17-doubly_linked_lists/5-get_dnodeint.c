#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node from the list at
 * a given position
 * @head: head pointer
 * @index: index of the required node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (i == index)
		return head;
	while (temp)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
