#include "lists.h"
/**
**add_dnodeint - adds a newnode at the begging of a dlistint
*@head: pointer of the first element
*@n: integer newnode
*Return: Address of the new element, NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;
if (*head != NULL)
(*head)->prev = newnode;
*head = newnode;
return (newnode);
}
