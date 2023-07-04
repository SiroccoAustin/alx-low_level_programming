#include "lists.h"

/**
 * insert_nodeint_at_index - insert niode at index
 * @head: pointer of node
 * @idx: index
 * @n: element
 * Return: new linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	
	while (count < idx - 1 && temp != NULL)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
