#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: pointer to a linked list
 * @index: index position of the node that gets deleted
 * Return: -1 on failure 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *temp = *head;
	listint_t *current;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	for (c = 0; c < index - 1; c++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);

}
