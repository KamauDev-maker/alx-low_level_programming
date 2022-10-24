#include "lists.h"
/**
*free_list - that frees list_t
*@head: start of list_t
*/
void free_list(list_t *head)
{
if (head == NULL)
return;
free_list(head->next);
free(head->str);
free(head);
}
