#include "lists.h"

/**
 * list_len - length of node
 * @h: pointer of node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
