#include "lists.h"

/**
* get_dnodeint_at_index - get node at index
* @head: pointer of linked list
* @index: index
* Return: node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *current = head;

	if (!head)
		return (NULL);
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count != index)
		return (NULL);
	return (current);
}
