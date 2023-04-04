#include "lists.h"

/**
 * get_nodeint_at_index - prints an index element
 * @head: struct
 * @index: index
 * Return: an element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	unsigned int count = 0;

	if (head == NULL)
	{
	return (NULL);
	}

	while (ptr != NULL)
	{
	if (count == index)
	{
	return (ptr);
	}
	count++;
	ptr = ptr->next;
	}
	return (0);
}
