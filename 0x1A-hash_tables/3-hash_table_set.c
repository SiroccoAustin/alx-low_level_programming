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
	if (key == NULL || *key == 0 || value == NULL || ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	if (ht[index] == NULL)
	{
		ht[index] = newNode;
	}
	else
	{
		newNode->next = ht[index];
		ht[index] = newNode;
	}
	return (1);
}
