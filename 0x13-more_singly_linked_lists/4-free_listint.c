#include "lists.h"
/**
*free_listint - frees a listint_t
*@head: start pointer
*/
void free_listint(listint_t *head)
{
listint_t *ptr;
while (head)
{
ptr = head;
head = head->next;
free(ptr);
}
}
