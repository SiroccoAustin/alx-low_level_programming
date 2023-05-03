#include "lists.h"

/**
 * free_listint2 - free memory
 * @head: pointer to node
 * Return: free memory and assign node to null
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
