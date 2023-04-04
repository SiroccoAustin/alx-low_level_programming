#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add the last node to the list
 * @head: pointer to the struct
 * @n: element
 * Return: last element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	listint_t *ptr = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
	return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
	*head = newNode;
	return (*head);
	}

	while (ptr->next != NULL)
	{
	ptr = ptr->next;
	}
	ptr->next = newNode;
	return (newNode);
}
