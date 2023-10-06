#include "hash_tables.h"

/**
 *hash_table_get - get value of hash table
 *@ht: pointer to the hash table
 *@key: key to the node
 *Return: node
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	char *value;
	hash_node_t *ptr;

	if (ht == NULL || ht->size == 0 || key == NULL || *key == 0)
		return (NULL);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			break;
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);
	value = strdup(ptr->value);
	if (value == NULL)
		return (NULL);
	return (strdup(ptr->value));
}
