#include "lists.h"
/**
 * free_dlistint_t - frees the given list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int n = 0;

	if (!head)
		return;

	if (!(temp->next))
	{
		free(temp);
		return;
	}
	while (temp)
	{
		temp = temp->next;
		if (!n)
			free(temp->prev);
		free(temp);
		n++;
	}
}
