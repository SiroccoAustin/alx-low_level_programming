#include "lists.h"

/**
 * sum_listint - sum all elements
 * @head: pointer to first node
 * Return: sum of all elements
 */

int sum_listint(listint_t *head)
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
