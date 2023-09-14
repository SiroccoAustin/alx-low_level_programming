#include "lists.h"

/**
* dlistint_len - counts number of nodes in linked list
* @h: pointer to linked list
* Return: number of nodes in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;
	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (elements);
}
