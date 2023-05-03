#include "lists.h"

/**
 * free_listint - free memory
 * @head: pointer to linked list
 * Return: free memory
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
