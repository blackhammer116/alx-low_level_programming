#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: head pointer
 * @n: new element of the node
 * Return: NULL if it fails, the new node on success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *temp2 = *head;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (!(*head))
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		while (temp2->next)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
		temp->prev = temp2;
	}
	return (temp);
}
