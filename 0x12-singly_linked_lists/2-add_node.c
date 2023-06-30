#include "lists.h"

/**
 * add_node - create a new node
 * @head: pointer to head
 * @str: data to add
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	size_t count = 0;

	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);

	while (str[i])
	{
		count++;
		i++;
	}
	ptr->len = count;
	ptr->next = *head;

	*head = ptr;

	return (*head);

}
