#include "lists.h"
/**
 * add_nodeint - adds a new node in the beginning of the
 * list
 * @head: head pointer
 * @n: new node
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		temp->next = NULL;
		temp->n = n;
		*head = temp;
		return (temp);
	}

	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (temp);
}
