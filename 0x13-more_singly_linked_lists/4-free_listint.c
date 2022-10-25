#include "lists.h"
/**
 * free_listint - frees a given list
 * @head: list pointer
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;

	}
}
