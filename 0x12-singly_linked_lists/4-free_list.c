#include "lists.h"

/**
 * free_list - free memory
 * @head: pointer to node
 * Return: free memory
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
