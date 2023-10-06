#include "hash_tables.h"

/**
 *key_index - create a key
 *@key: key to be created
 *@size: size of key
 *Return: new key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	index = hash_djb2(key) % size;
	return (index);
}
