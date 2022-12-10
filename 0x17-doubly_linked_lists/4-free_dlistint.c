#include "lists.h"
/**
 * free_dlistint_t - frees the given list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head
	while (temp)
	{
		free(temp->next);
		temp = temp->next;
	}
	free(head)
}
