#include "hash_tables.h"
/**
 * *hash_table_create - ptr to the newly created hash table
 *@size: size of the array
 * Return: if success ptr, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	if (size < 1)
	{
		return (NULL);
	}
	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->array = malloc(sizeof(hash_table_t *) * size);

	if (hash_table->array == NULL)
	{
		return (NULL);
	}
	memset(hash_table->array, 0, sizeof(hash_table_t *) * size);
	hash_table->size = size;
	return (hash_table);
}
