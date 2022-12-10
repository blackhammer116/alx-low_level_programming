#include "lists.h"
/**
 * add_dnodeint - adds node in the begining
 * @head: head pointer
 * @n: new element
 *
 * Return: NULL on failure, the new node on success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	
	temp->n = n;
	temp->prev = NULL;

	if (!(*head))
	{
		temp->next = *head;
		*head = new;
	}
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (temp);
}
