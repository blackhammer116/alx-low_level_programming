#include "lists.h"
/**
 * add_nodeint_end - adds a new node in the end
 * @head: pointer to list
 * @n: new node
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	temp = *head;
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		*head = new;
	}
	while (*temp->next != NULL)
	{
		temp = temp->next;
	}
	new->next = NULL;
	new->n = n;
	temp->next = new;
	return (new);
}
