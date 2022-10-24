#include "lists.h"
/**
**add_node - adds a new node at the beginning
*@head: start of the node
*@str: string to be added
*Return: nodes
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
char *dup_str;
int len;
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
dup_str = strdup(str);
if (dup_str == NULL)
{
free(newnode);
return (NULL);
}
for (len = 0; str[len];)
len++;
newnode->str = dup_str;
newnode->len = len;
newnode->next = *head;
*head = newnode;
return (newnode);
}
