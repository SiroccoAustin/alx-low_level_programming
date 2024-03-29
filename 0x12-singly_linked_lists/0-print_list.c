#include "lists.h"

/**
 * print_list - prints all the elements if the linked list
 * @h: pointer to node
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		num++;
		h = h->next;
	}
	return (num);
}
