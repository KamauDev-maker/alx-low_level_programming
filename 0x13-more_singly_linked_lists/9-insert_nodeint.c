#include "lists.h"
/**
**insert_nodeint_at_index - inserts a new node at given position
*@head: starts pointer of the node
*@idx: index where the new node should be placed
*@n: data to be placed
*Return: Address of the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp;
unsigned int i;
temp = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; i < idx - 1; i++)
{
temp = temp->next;
if (temp == NULL)
{
return (NULL);
}
}
new->next = temp->next;
temp->next = new;
return (new);
}
