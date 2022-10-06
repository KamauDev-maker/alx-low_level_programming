#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
**string_nconcat - that concatenates two string
*@s1: string one
*@s2: string two
*@n: bytes of memory allocated
*Return: pointer to newly allocated space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_concat;
unsigned int len = n, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
len++;
new_concat = malloc(sizeof(char) * (len + 1));
if (new_concat == NULL)
return (NULL);
len = 0;
for (i = 0; s1[i]; i++)
new_concat[len++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
new_concat[len++] = s2[i];
new_concat[len] = '\0';
return (new_concat);
}
