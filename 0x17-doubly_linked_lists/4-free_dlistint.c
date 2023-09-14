#include "lists.h"

/**
* free_dlistint - free memory
* @head: pointer to linked list
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{	
	dlistint_t *current = head;
	dlistint_t *next;

	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
