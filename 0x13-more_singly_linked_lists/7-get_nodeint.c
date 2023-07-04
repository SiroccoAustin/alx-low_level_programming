#include "lists.h"

/**
 * get_nodeint_at_index - get index of linked list
 * @head: ponter to first node
 * @index: index
 * Return: new linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		count++;
	}
	return (head);
}
