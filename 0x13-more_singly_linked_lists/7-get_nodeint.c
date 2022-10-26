#include "lists.h"
/**
 * get_nodeint_at_index - gets the value/data stored in the node
 * by the given index position
 * @head: pointer to a list
 * @index: index position of the required
 * Return: NULL on failure and the node's value on success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int c = 0;

	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (c == index)
			return (temp->n);
		c++;
		temp = temp->next;
	}
	return (NULL);
}
