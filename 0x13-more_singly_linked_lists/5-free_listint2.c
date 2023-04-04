#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free memory
 * @head: pointer
 * Return: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (*head)
	{
	ptr = ptr->next;
	free(*head);
	*head = ptr;
	*head = NULL;
	}
}
