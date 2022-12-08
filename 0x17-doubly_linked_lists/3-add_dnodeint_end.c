#include "lists.h"
/**
**add_dnodeint_end - adds a new node at the end of dlistint
*@head: The first pointer of the element
*@n: integer data
*Return: address of the new element, NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode, *end;
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
/*Assign data values*/
newnode->n = n;
/* connect node */
newnode->next = NULL;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
end = *head;
while (end->next != NULL)
end = end->next;
end->next = newnode;
newnode->prev = end;
return (newnode);
}
