#include "lists.h"
/**
 * add_node - adds a new node to the beginning of the
 * list
 * @head: head pointer
 * @str: string element to be added
 * Return: NULL if fail , the address of the new node
 * if success 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(new);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
