#include "lists.h"
/**
**get_nodeint_at_index - returns the nth of a listint_t
*@head: start pointer node
*@index: the nth value
*Return: NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *newnode = head;
for (i = 0; newnode != NULL; i++)
{
if (i == index)
return (newnode);
newnode = newnode->next;
}
return (NULL);
}
