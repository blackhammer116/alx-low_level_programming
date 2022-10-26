#include "lists.h"
/**
 * insert_nodeint_at_index - insertes anew node at a given index position
 * @head: pointer to a list
 * @idx: index position the new node is inserted in
 * @n: value/data of the new node
 * Return: NULL on failure, the address of the new node on success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int c = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	temp = *head;
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}
	for (c = 0; temp && c < idx; c++)
	{
		if (c == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
	return (NULL);
}
