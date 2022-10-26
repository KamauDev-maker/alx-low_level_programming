#include "lists.h"
/**
*print_listint - prints all the element of a listint_t
*@h: start node
*Return: numbers of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
