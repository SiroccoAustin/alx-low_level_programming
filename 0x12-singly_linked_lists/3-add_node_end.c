#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node at the end of list
 * @head: pointer to the linked list
 * @str: string
 * Return: nod eat the end of linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	list_t *last;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);
}
