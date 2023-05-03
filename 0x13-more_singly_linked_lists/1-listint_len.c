#include "lists.h"

/**
 * listint_len - return length of the linked list
 * @h: pointer to the nodes
 * Return: length of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
