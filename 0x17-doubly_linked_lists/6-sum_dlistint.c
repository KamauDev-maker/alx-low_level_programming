#include "lists.h"
/**
*sum_dlistint - that returns the sum of all data(n)
*@head: the first pointer of the element
*Return: O if empty
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp;
if (head == NULL)
return (0);
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
