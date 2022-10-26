#include "lists.h"
/**
*listint_len - returns the number of elements in a linked list
*@h: start of the pointer node
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t element_counter = 0;
while (h)
h = h->next, element_counter++;
return (element_counter);
}
