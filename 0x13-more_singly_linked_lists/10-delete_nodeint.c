#include "lists.h"
/**
*delete_nodeint_at_index -  deletes the node at index of listint_t
*@head: start pointer node
*@index: index of the node to be deleted
*Return: 1 if success -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp, *next;
if (*head == NULL)
return (-1);
temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
for (i = 0; temp != NULL && i < index - 1; i++)
{
temp = temp->next;
}
if (temp == NULL || temp->next == NULL)
return (-1);
next = temp->next->next;
free(temp->next);
temp->next = next;
return (1);
}
