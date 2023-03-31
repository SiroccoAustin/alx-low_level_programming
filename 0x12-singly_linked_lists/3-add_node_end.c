#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add node at the end of teh linked list
 * @head: pointer to the head pointer
 * @str: string
 * Return: last element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	list_t *ptr = *head;

	unsigned int len = strlen(str);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
	return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
	*head = newNode;
	return (newNode);
	}

	while (ptr->next)
	{
	ptr = ptr->next;
	}
	ptr->next = newNode;
	return (newNode);
}
