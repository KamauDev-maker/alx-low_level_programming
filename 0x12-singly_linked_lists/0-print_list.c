#include "lists.h"
#include <stdio.h>
/**
*print_list -prints all elements of a list_t
*@h: the list_t
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *temp = h;
int node = 0;
while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)\n");
}
else
printf("[%d] %s\n", temp->len, temp->str);
node++;
temp = temp->next;
}
return (node);
}
