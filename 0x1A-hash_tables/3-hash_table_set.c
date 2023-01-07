#include "hash_tables.h"
/**
 * hash_table_set - adds an element to hash table
 * *@ht: the hash table to be added
 * @key: is the key & cant be empty str
 * @value: value associated with the key
 * Return: 1 if success 0 otherwise
 */ 
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index, size;
	hash_node_t *new_node;

	/*check for valid input*/
	if (!ht || !key || !*key || !value)
	{
		return (0);
	}

	/* calculate hash key */
	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key)== 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

	/* Allocate memory for new hash table node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* set key and value for new node*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* check for collision */
	if (ht->array[index])
	{
		/* add a new node at the beginning of list*/
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;
	return (1);
}
