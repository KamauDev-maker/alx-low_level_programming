#include "hash_tables.h"
/**
 * key_index - that gives you the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: inex at which key/value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, count = 0;

	while (key && key[count])
	{
		index = hash_djb2(key) % size;
		++count;
	}
	return (index);
}
