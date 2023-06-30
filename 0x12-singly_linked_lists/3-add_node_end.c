#include "lists.h"

/**
 * add_node_end - add node at end of list
 * @head: pointer to head
 * @str: string
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;

	int i = 0;

	list_t *ptr = malloc(sizeof(list_t));

	list_t *d;

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	while (str[i])
	{
		len++;
		i++;
	}
	ptr->len = len;
	ptr->next = NULL;
	d = *head;
	if (*head == NULL)
		*head = ptr;
	else
	{

		while (d->next != NULL)
		{
			d = d->next;
		}
		d->next = ptr;
	}

	return (*head);
}
