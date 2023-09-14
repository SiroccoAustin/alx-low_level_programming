#include "lists.h"

/**
* sum_dlistint - sum up all node values
* @head: pointer to node
* Return: sum of nodes
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
