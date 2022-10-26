#include "lists.h"
/**
**reverse_listint - reverses a listint_int
*@head: pointer head
*Return: pointer to firt node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;
prev = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = (*head);
(*head) = next;
}
*head = prev;
return (*head);
}
