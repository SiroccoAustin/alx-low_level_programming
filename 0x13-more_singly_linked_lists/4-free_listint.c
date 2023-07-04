#include "lists.h"

/**
 * free_listint - free memory
 * @head: pointer to first node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
