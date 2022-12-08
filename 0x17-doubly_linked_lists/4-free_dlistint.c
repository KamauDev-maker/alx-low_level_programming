#include "lists.h"
/**
*free_dlistint - that frees a dlistint
*@head: pointer of the first element
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
