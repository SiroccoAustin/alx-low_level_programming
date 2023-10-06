#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int = index;
	index = hash(key) % size;
	return (index);
}
