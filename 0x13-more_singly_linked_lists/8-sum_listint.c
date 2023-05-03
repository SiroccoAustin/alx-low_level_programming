#include "lists.h"

/**
 * sum_listint - add all the nodes
 * @head: pointer to llinked list
 * Return: sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
