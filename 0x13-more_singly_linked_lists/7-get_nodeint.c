#include "lists.h"

/**
 * get_nodeint_at_index - outputs an element at an index
 * @head: pointer to the linked list
 * @index: index to display
 * Return: value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
