#include "lists.h"
/**
*list_len - returns num of elemets
*@h: the list_t
*Return: Num elements
*/
size_t list_len(const list_t *h)
{
int i;
for (i = 0; h; i++)
h = h->next;
return (i);
}
