#include "lists.h"
/**
 * sum_dlistint - sums up all the data in the list
 * @head: head pointer
 * Return: the sum of the datas in the list and 0
 * if th list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	if (!head->next)
		return (head->n);
	while (temp)
	{
		sum  += temp->n;
		temp = temp->next;
	}
	return (sum);
}
