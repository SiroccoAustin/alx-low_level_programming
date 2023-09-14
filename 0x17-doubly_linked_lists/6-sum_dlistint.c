#include "lists.h"

/**
* sum_dlistint - sum up all node values
* @head: pointer to node
* Return: sum of nodes
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *current = head;
	if (!head)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
