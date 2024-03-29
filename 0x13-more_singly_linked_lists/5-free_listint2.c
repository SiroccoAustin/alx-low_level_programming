#include "lists.h"

/**
 * free_listint2 - free memory
 * @head: pointer to first node
 * Return: nothing
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
}
