#include "lists.h"
/**
*dlistint_len - that returns the number of elements
*@h: pointer head
*Return: Always success
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
