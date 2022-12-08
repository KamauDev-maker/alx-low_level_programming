#include "lists.h"
/**
*insert_dnodeint_at_index - that inserts a new node
*@h: pointer of the first node
*@idx: position to add new node
*@n: data to the newnode
*Return: address of the newnode, NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = *h, *newnode;
if (idx == 0)
return (add_dnodeint(h, n));
for (; idx != 1; idx--)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
}
if (temp->next == NULL)
return (add_dnodeint_end(h, n));
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->prev = temp;
newnode->next = temp->next;
temp->next->prev = newnode;
temp->next = newnode;
return (newnode);
}
