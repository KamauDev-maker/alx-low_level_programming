#include "lists.h"
/**
**add_node_end - adds a newnode at the end
*@head: start of the node
*@str: string to be added at the end
*Return: node of the nee element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *end;
char *dup_str;
int len;
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
dup_str = strdup(str);
if (str == NULL)
{
free(newnode);
return (NULL);
}
for (len = 0; str[len];)
len++;
newnode->str = dup_str;
newnode->len = len;
newnode->next = NULL;
if (*head == NULL)
*head = newnode;
else
{
end = *head;
while (end->next != NULL)
end = end->next;
end->next = newnode;
}
return (*head);
}
