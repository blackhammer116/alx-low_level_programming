#include "lists.h"
/**
 * sum_listint - adds all of the list's values/datas
 * and returns their sum
 * @head: pointer to a list
 * Return: 0 if list is empty, their sum on success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
