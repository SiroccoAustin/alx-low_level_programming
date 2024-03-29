#include "hash_tables.h"

/**
 *hash_table_set - add new value to the hash table
 *@ht: pointer to hash table
 *@key: key to the value
 *@value: value of the new node
 *Return: 1 if sucessful and 0 if not successful
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *newNode;
	if (key == NULL || *key == 0 || value == NULL || ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL) 
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL) 
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
	}
	else
	{
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
	}
	return (1);
}
