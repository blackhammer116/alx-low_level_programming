#include "lists.h"
/**
 * pop_listint - delets the head node and returns the node's data
 * @head: pointer to a list
 * Return: the head node's data/value
 */
int pop_listint(listint_t **head)
{
	
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);

}
