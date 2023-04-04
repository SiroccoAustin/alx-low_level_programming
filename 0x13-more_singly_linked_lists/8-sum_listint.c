#include "lists.h"

/**
 * sum_listint - add elements
 * @head: struct
 * Return: total sum of elements
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;

	int sum = 0;

	if (head == NULL)
	{
	return (0);
	}

	while (ptr != NULL)
	{
	sum += ptr->n;
	ptr = ptr->next;
	}
	return (sum);
}
